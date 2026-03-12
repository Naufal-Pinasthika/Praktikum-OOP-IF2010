
#include <iostream>
#include "User.hpp"
#include "AdminUser.hpp"
#include "Authenticator.hpp"

using namespace std;

Authenticator::Authenticator() {
    this->secretResource = "Ini adalah data rahasia!";
    this->currentUser = nullptr;
    this->userCount = 0;

}
/* Constructor:
 * - Menginisialisasi sistem dengan resource rahasia ("Ini adalah data rahasia!")
 * - Tidak ada user yang login (nullptr)
 * - Tidak ada user yang terdaftar
 */


void Authenticator::registerUser(const string &username, const string &password, bool isAdmin) {

    if (this->userCount == MAX_USERS) {
        cout << "Gagal: Kapasitas user penuh!" << endl;
        return;
    }


    for (int i = 0; i < userCount; i++) {
        if (this->users[i]->getUsername() == username) {
            cout << "Gagal: Username sudah digunakan!" << endl;
            return;
        }
    }

    if (isAdmin == true) {
        AdminUser *admin = new AdminUser(username, password);
        users[userCount] = admin;
    
    } else {
        User *user = new User(username, password);
        users[userCount] = user;
    }

    this->userCount++;
    cout << "Sukses: User " << username << " berhasil terdaftar!\n";
    
}
/* Mendaftarkan user baru sebagai RegularUser atau AdminUser.
 * Input:
 * - username: Nama pengguna yang ingin didaftarkan.
 * - password: Kata sandi untuk pengguna.
 * - isAdmin: Jika true, user akan dibuat sebagai AdminUser, jika false sebagai User biasa.
 *
 * Output:
 * - "Gagal: Kapasitas user penuh!" jika jumlah user telah mencapai batas maksimum.
 * - "Gagal: Username sudah digunakan!" jika username sudah terdaftar dalam sistem.
 * - "Sukses: User <username> berhasil terdaftar!" jika pendaftaran berhasil.
 *      *<username> diganti dengan nama pengguna yang baru terdaftar.
 */


void Authenticator::login(const string &username, const string &password) {
    for (int i = 0; i < userCount; i++){
        if (this->users[i]->getUsername() == username) {
            if (this->users[i]->checkPassword(password) == true) {
                cout << "Sukses: Login berhasil! Selamat datang, " << username << ".\n";
                this->currentUser = this->users[i];
                return;

            }
        }
    }

    cout << "Gagal: Username atau password salah!\n";
}
/* Mencoba login dengan username dan password yang diberikan.
 * Input:
 * - username: Nama pengguna yang ingin login.
 * - password: Kata sandi pengguna yang ingin login.
 *
 * Output:
 * - "Gagal: Username atau password salah!" jika kombinasi username dan password tidak ditemukan.
 * - "Sukses: Login berhasil! Selamat datang, <username>." jika login berhasil.
 *      *<username> diganti dengan nama pengguna yang berhasil login.
 */

void Authenticator::logout(){
    if (this->currentUser == nullptr){
        cout << "Gagal: Tidak ada user yang sedang login!\n";
    } else {        
        cout << "Sukses: User " << this->currentUser->getUsername() << " telah logout.\n";
        this->currentUser = nullptr;
    }
}
/* Melakukan logout dari sesi yang sedang berjalan.
 *
 * Output:
 * - "Gagal: Tidak ada user yang sedang login!" jika tidak ada user yang sedang login.
 * - "Sukses: User <username> telah logout." jika logout berhasil.
 *      *<username> diganti dengan nama pengguna yang logout.
 */


void Authenticator::accessResource() const {
    if (this->currentUser == nullptr){
        cout << "Akses ditolak! Silakan login terlebih dahulu.\n";
    } else {
        cout << "Resource: " << this->secretResource << "\n";
    }
}
/* Menampilkan resource rahasia jika user sudah login.
 *
 * Output:
 * - "Akses ditolak! Silakan login terlebih dahulu." jika tidak ada user yang login.
 * - "Resource: <secretResource>" jika user sedang login.
 *      *<secretResource> diganti dengan resource rahasia saat ini.
 */
void Authenticator::setResource(const string &newResource) {
    if (this->currentUser == nullptr) {
        cout << "Gagal: Tidak bisa mengubah resource! Silakan login terlebih dahulu.\n";
    } else if (this->currentUser->isAdmin() == false) {
        cout << "Gagal: Tidak bisa mengubah resource! Hanya admin yang dapat melakukan ini.\n";
    } else if (this->currentUser->isAdmin() == true) {
        this->secretResource = newResource;
        cout << "Sukses: Resource telah diperbarui oleh " << this->currentUser->getUsername() << ".\n";
    }
}
/* Mengubah resource rahasia (hanya AdminUser yang dapat melakukannya).
 * Input:
 * - newResource: Resource baru yang akan disimpan.
 *
 * Output:
 * - "Gagal: Tidak bisa mengubah resource! Silakan login terlebih dahulu." jika tidak ada user yang login.
 * - "Gagal: Tidak bisa mengubah resource! Hanya admin yang dapat melakukan ini." jika user yang login bukan AdminUser.
 * - "Sukses: Resource telah diperbarui oleh <username>." jika resource berhasil diubah.
 *      *<username> diganti dengan nama pengguna admin yang melakukan perubahan.
 */
Authenticator::~Authenticator() {
    for(int i = 0; i < userCount; i++){
        delete users[i];
        users[i] = nullptr;
    }
    currentUser = nullptr;
}
/* Destructor:
 * - Membersihkan semua objek User dan AdminUser yang telah dibuat.
 */
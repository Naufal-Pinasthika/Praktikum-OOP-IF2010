#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Mahasiswa {
private:
    string name;
    string nim;
    float ipk;
    int total_sks;

public:
    static int counter;
    Mahasiswa();
    Mahasiswa(string name);
    Mahasiswa(const Mahasiswa&); 
    void tambahNilai(float nilai, int sks_baru);
    void info();
    ~Mahasiswa();

};

int Mahasiswa::counter = 0;

Mahasiswa::Mahasiswa() {
    this->name = "NPC";
    this->nim = "135" + to_string(counter);
    this->ipk = 0.00;
    this->total_sks = 0;

    counter++;
}

Mahasiswa::Mahasiswa(string name) {
    this->name = name;
    this->nim = "135" + to_string(counter);
    this->ipk = 0.00;
    this->total_sks = 0;

    counter++;   
}

// Mahasiswa::Mahasiswa(const Mahasiswa&) {
//     name = this->name;
//     nim = this->nim;
//     ipk = this->ipk;
//     total_sks = this->total_sks;

//     counter++;
// }

void Mahasiswa::tambahNilai(float nilai, int sks_baru) {
    this->ipk = (this->ipk * this->total_sks + nilai * sks_baru) / (this->total_sks + sks_baru);
    this->total_sks += sks_baru;
}

void Mahasiswa::info() {
    cout << "INFORMASI MAHASISWA" << endl;
    cout << "Nama: " << this->name << endl;
    cout << "NIM: " << this->nim << endl;

    cout << setprecision(2) << fixed;

    cout << "IPK: " << this->ipk << endl;
    cout << "SKS: " << this->total_sks << endl;
}

Mahasiswa::~Mahasiswa() {

}

#include "Penganan.hpp"
#include <iostream>

using namespace std;

int Penganan::uang = 0;
int Penganan::n_rumah = 0;

Penganan::Penganan() {
    keik = 0;
    panekuk = 0;

}

Penganan::Penganan(int keik, int panekuk) {
    this->keik = keik;
    this->panekuk = panekuk;
}

int Penganan::GetKeik () const {
    return this->keik;
}

int Penganan::GetPanekuk() const {
    return this->panekuk;
}

void Penganan::SetKeik(int keik) {
    this->keik = keik;
}

void Penganan::SetPanekuk(int panekuk) {
    this->panekuk = panekuk;
}

Penganan operator+(const Penganan& lhs, const Penganan& rhs) {
    Penganan a = lhs;
    a.keik = a.keik + rhs.keik;
    a.panekuk = a.panekuk + rhs.panekuk;
    a.n_rumah++;
    return a;

}
Penganan operator-(const Penganan& lhs, const Penganan& rhs) {
    int countBarangPanekuk = 0;
    int countBarangKeik = 0;

    Penganan a = lhs;
    
    if (a.panekuk < rhs.panekuk) {
        countBarangPanekuk = a.panekuk;
        a.panekuk -= a.panekuk;
    } else {
        countBarangPanekuk = rhs.panekuk;
        a.panekuk -= rhs.panekuk;
    }

    if (a.keik < rhs.keik) {
        countBarangKeik = a.keik;
        a.keik -= a.keik;
    } else {
        countBarangKeik = rhs.keik;
        a.keik -= rhs.keik;
    }

    a.uang += countBarangKeik * 51;
    a.uang += countBarangPanekuk * 37;

    return a;
}

Penganan operator^(const Penganan& lhs, const int n) {
    Penganan a = lhs;
    int sisa;
    if (a.keik < n) {
        sisa = n - a.keik;
        a.keik = 0;

        a.uang -= sisa * 51;
    } else {
        a.keik -= n;
    }

    if (a.panekuk < n) {
        sisa = n - a.panekuk;
        a.panekuk = 0;

        a.uang -= sisa * 37;
    } else {
        a.panekuk -= n;
    }
    return a;
}

Penganan operator^ (const int n, const Penganan& rhs) {
    Penganan a = rhs;
    int sisa;
    if (a.keik < n) {
        sisa = n - a.keik;
        a.keik = 0;

        a.uang -= sisa * 51;
    } else {
        a.keik -= n;
    }

    if (a.panekuk < n) {
        sisa = n - a.panekuk;
        a.panekuk = 0;

        a.uang -= sisa * 37;
    } else {
        a.panekuk -= n;
    }
    return a;
}
int Penganan::JumlahUang() {
    return uang;
}

int Penganan::HitungNRumah() {
    return n_rumah;
}

void Penganan::Print() {
    cout << this->GetKeik() << "keik-" << this->GetPanekuk() << "panekuk\n";
}
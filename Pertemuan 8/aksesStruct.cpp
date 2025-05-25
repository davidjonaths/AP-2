#include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct mahasiswa dengan atribut nama, umur, dan ipk
struct mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    // Membuat objek mahasiswa mhs1
    mahasiswa mhs1;

    // Mengisi data mhs1
    mhs1.nama = "Dave";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // Cara akses langsung menggunakan objek
    // cout << "Nama = " << mhs1.nama << endl;
    // cout << "Umur = " << mhs1.umur << endl;
    // cout << "IPK = " << mhs1.ipk << endl;

    // Membuat pointer yang menunjuk ke mhs1
    mahasiswa *ptrmhs = &mhs1;

    // Mengakses anggota struct menggunakan pointer dengan operator '->'
    cout << "nama = " << ptrmhs->nama << endl;
    cout << "umur = " << ptrmhs->umur << endl;
    cout << "ipk = " << ptrmhs->ipk << endl;

    return 0;
}


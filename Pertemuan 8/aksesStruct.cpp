#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {

    mahasiswa mhs1;

    mhs1.nama = "Dave";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // cout << "Nama = " << mhs1.nama << endl;
    // cout << "Umur = " << mhs1.umur << endl;
    // cout << "IPK = " << mhs1.ipk << endl;

    mahasiswa *ptrmhs = &mhs1;
    cout << "nama = " << ptrmhs -> nama << endl;
    cout << "umur = " << ptrmhs -> umur << endl;
    cout << "ipk = " << ptrmhs -> ipk << endl;
}
#include <iostream>
using namespace std;

int main() {
    int angka; // variabel untuk menyimpan input bilangan bulat

    cout << "Masukkan bilangan bulat: ";
    cin >> angka; // membaca input dari user

    // cek apakah angka merupakan kelipatan 10
    if (angka % 10 == 0) {
        cout << angka << " adalah kelipatan dari 10." << endl;
    }
    // jika bukan kelipatan 10, cek apakah kelipatan 5
    else if (angka % 5 == 0) {
        cout << angka << " adalah kelipatan dari 5." << endl;
    }
    // jika bukan kelipatan 10 atau 5
    else {
        cout << angka << " bukan kelipatan dari 5 maupun 10." << endl;
    }

    return 0; // program selesai dengan sukses
}

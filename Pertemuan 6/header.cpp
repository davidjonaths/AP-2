#include <iostream>
#include <cmath>           // Untuk fungsi sqrt
#include "headerCustom.h"  // Header custom (pastikan sudah dibuat dan benar)
using namespace std;

// Fungsi penjumlahan dua bilangan
int jumlah(int a, int b) {
    return a + b;
}

// Fungsi pengurangan dua bilangan
int kurang(int a, int b) {
    return a - b;
}

int main() {
    system("CLS");  // Bersihkan layar (Windows)

    // Memanggil fungsi jumlah dan kurang lalu menampilkan hasilnya
    cout << jumlah(2, 3) << endl;   // Seharusnya 'cout <<', bukan 'o L'
    cout << kurang(2, 3) << endl;

    double angka = 25.0;
    double akar = sqrt(angka);  // Menghitung akar kuadrat dari angka

    cout << "Akar kuadrat dari " << angka << " adalah : " << akar << endl;

    return 0;
}

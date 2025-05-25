#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan (void function)
void tampilkanPesan() {
    cout << "=== SELAMAT DATANG DI AP 2 ===" << endl;
}

// Fungsi dengan nilai balikan, mengembalikan hasil penjumlahan dua bilangan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi overload: dua fungsi dengan nama sama tapi tipe parameter berbeda

// Perkalian dua bilangan integer
int kali(int a, int b) {
    return a * b;
}

// Perkalian dua bilangan double (desimal)
double kali(double a, double b) {
    return a * b;
}

// Fungsi rekursif untuk menghitung faktorial dari sebuah angka
int faktorial(int n) {
    // Basis rekursi: faktorial 0 dan 1 adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Pemanggilan fungsi secara rekursif
        return n * faktorial(n - 1);
    }
}

int main() {
    system("CLS"); // Membersihkan layar (khusus Windows)

    // Memanggil fungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;

    // Memanggil fungsi tambah dan menyimpan hasilnya
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    // Memanggil fungsi overload kali dengan tipe int
    int hasilKaliInt = kali(x, y);
    // Memanggil fungsi overload kali dengan tipe double
    double hasilKaliDouble = kali(5.5, 2.0);

    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // Menggunakan fungsi rekursif untuk faktorial
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl;

    return 0;
}


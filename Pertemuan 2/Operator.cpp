#include <iostream>
using namespace std;

int main () {
    int a, b;

    system("CLS"); // Membersihkan layar (khusus Windows), tidak portable

    // Assignment operator
    a = 3; // nilai a diisi 3
    b = 5; // nilai b diisi 5

    // Arithmetical operator (contoh operasi matematika dasar)
    /*
    int tambah = a + b;            // Penjumlahan
    int kurang = a - b;            // Pengurangan
    int kali = a * b;              // Perkalian
    float bagi = (float)a / (float)b; // Pembagian dengan type casting agar hasil float
    int modulo = a % b;            // Sisa bagi (modulus)

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil sisa bagi = " << modulo << endl;
    */

    // Relational Operator (operator perbandingan yang menghasilkan boolean)
    /*
    cout << (a==b) << endl;  // Apakah a sama dengan b?
    cout << (a<b) << endl;   // Apakah a kurang dari b?
    cout << (a<=b) << endl;  // Apakah a kurang dari atau sama dengan b?
    cout << (a>b) << endl;   // Apakah a lebih dari b?
    cout << (a>=b) << endl;  // Apakah a lebih dari atau sama dengan b?
    cout << (a!=b) << endl;  // Apakah a tidak sama dengan b?
    */

    // Logical Operator (&&, ||, !) digunakan untuk operasi logika AND, OR, dan NOT
    /*
    cout << (true && true) << endl;    // true AND true = true
    cout << (true && false) << endl;   // true AND false = false
    cout << (false && true) << endl;   // false AND true = false
    cout << (false && false) << endl;  // false AND false = false

    cout << (true || true) << endl;    // true OR true = true
    cout << (true || false) << endl;   // true OR false = true
    cout << (false || true) << endl;   // false OR true = true
    cout << (false || false) << endl;  // false OR false = false

    cout << !true << endl;  // NOT true = false
    cout << !false << endl; // NOT false = true
    */

    // Bitwise Operator (&, |, ^, ~, >>, <<) untuk operasi biner di level bit
    /*
    cout << (5 & 7) << endl;   // AND bitwise
    cout << (5 | 7) << endl;   // OR bitwise (baris kamu salah pakai '/' harusnya '|')
    cout << (5 ^ 7) << endl;   // XOR bitwise
    cout << (~7) << endl;      // NOT bitwise
    cout << (7 << 2) << endl;  // Left shift (menggeser bit ke kiri)
    cout << (7 >> 2) << endl;  // Right shift (menggeser bit ke kanan)
    */

    // Shorthand assignment operators (penulisan singkat)
    /*
    a += 7; // sama dengan a = a + 7
    cout << a << endl;

    a -= 7; // sama dengan a = a - 7
    cout << a << endl;

    a *= 7; // sama dengan a = a * 7
    cout << a << endl;

    a /= 7; // sama dengan a = a / 7
    cout << a << endl;
    */

    // Increment dan Decrement (menambah atau mengurangi nilai 1)
    /*
    // Pre Increment (nilai ditambah dulu baru dipakai)
    cout << ++a << endl; 

    // Post Increment (nilai dipakai dulu baru ditambah)
    cout << a++ << endl; 

    // Pre Decrement (nilai dikurangi dulu baru dipakai)
    cout << --a << endl;

    // Post Decrement (nilai dipakai dulu baru dikurangi)
    cout << a-- << endl;
    */

    // Pada kode yang kamu aktifkan:
    cout << a << endl;    // Tampilkan nilai a (3)
    cout << a-- << endl;  // Tampilkan nilai a (3), lalu kurangi a menjadi 2
    cout << a << endl;    // Tampilkan nilai a (2)

    cout << b << endl;    // Tampilkan nilai b (5)
    cout << b-- << endl;  // Tampilkan nilai b (5), lalu kurangi b menjadi 4
    cout << b << endl;    // Tampilkan nilai b (4)
}

#include <iostream>
using namespace std;

int main() {
    // Kode ini menunjukkan berbagai contoh penggunaan statement kontrol alur di C++
    
    // Contoh penggunaan goto (dalam komentar)
    // goto bisa melompat ke label tertentu, tapi penggunaannya sebaiknya dihindari karena bisa membuat kode susah dibaca
    /*
    a:
        cout << "Hello World" << endl;
        goto d;
    b:
        cout << "Fasilkom-TI" << endl;
        return 0;
    c:
        cout << "Ilmu Komputer" << endl;
        goto b;
    d:
        cout << "IKLC" << endl;
        goto c;
    */

    // Contoh menampilkan bilangan genap dari 10 ke 2 menggunakan goto (dalam komentar)
    /*
    int i = 10;
    genap:
    if (i % 2 == 0) {
        cout << i << " ";
    }
    i--;
    if (i >= 2) {
        goto genap;
    }
    */

    // Contoh penggunaan while loop (dalam komentar)
    /*
    int i = 1;
    while (i <= 10) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    */

    // Contoh penggunaan do-while loop (dalam komentar)
    /*
    int i = 1;
    do {
        cout << i << endl;
    } while (i <= 0); // Kondisi salah, jadi do-while tetap dijalankan sekali
    */

    // Contoh for loop untuk mencetak "Hello World" sebanyak 5 kali (i += 2)
    /*
    for (int i = 1; i <= 10; i += 2) {
        cout << "Hello World" << endl; // i bertambah 2 setiap iterasi
    }
    */

    // Nested for loop untuk mencetak persegi bintang 5x5 (dalam komentar)
    /*
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    */

    // Segitiga siku-siku menggunakan nested for loop (yang aktif)
    // Baris 1 cetak 1 bintang, baris 2 cetak 2 bintang, dan seterusnya sampai baris 5
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  // pindah ke baris baru setiap selesai satu baris bintang
    }
}

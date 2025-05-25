#include <iostream>  // Header standar untuk input-output di C++
#include <conio.h>   // Digunakan untuk fungsi getch() dan getche(), TIDAK portabel (khusus Windows/Turbo C)
using namespace std;

int main() {
    string nama;         // Menyimpan nama sebagai string (C++ modern)
    char kom, jeniskelamin; // Menyimpan satu karakter: kom dan jenis kelamin
    int nim;             // Menyimpan NIM
    float ip;            // Menyimpan IP (Indeks Prestasi)

    /* Ini komentar
       beberapa baris */

    cout << "Hello World" << endl; // Menampilkan teks dengan baris baru

    cout << "Masukkan nama anda : ";
    cin >> nama; // ⚠️ Akan berhenti pada spasi. Jika nama terdiri dari dua kata, gunakan getline(cin, nama)

    cout << "Masukkan kom : ";
    cin >> kom;

    cout << "Masukkan nim : ";
    cin >> nim;

    cout << "Masukkan ip : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin : (L/P) : ";
    jeniskelamin = getche(); // Menampilkan karakter secara langsung tanpa menunggu Enter

    /* Untuk Output */
    cout << endl; // Tambahkan baris baru agar output tidak menempel
    cout << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jeniskelamin); // Menampilkan karakter jenis kelamin

    getch(); // Menunggu tombol ditekan tanpa menampilkan karakter — hanya berfungsi di Windows
}

#include <iostream> // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main() {

    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;
    
    /*ini untuk komen
    beberapa baris*/

    cout << "Hello World" << endl;

    cout << "Masukkan nama anda : ";
    cin >> nama;

    cout << "Masukkan kom : ";
    cin >> kom;

    cout << "Masukkan nim : ";
    cin >> nim;

    cout << "Masukkan ip : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin : (L/P) : ";
    jeniskelamin = getche(); // agar karakter langsung tampil, tanpa tekan enter


    /*Untuk Output*/
    cout << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jeniskelamin); // untuk menampilkan karakter dari si jenis kelamin

    getch(); // karakter yang diketik tidak ditampilkan di layar
}
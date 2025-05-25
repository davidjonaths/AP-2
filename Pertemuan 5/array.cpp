#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {
    // Contoh Deklarasi dan Inisialisasi Array

    // Cara 1: Array kosong kemudian diisi per elemen
    // string nama[5];
    // nama[0]="Alya";
    // nama[1]="Parul";
    // nama[2]="Syukron";
    // nama[3]="Aurick";
    // nama[4]="Dzakwan";

    // Cara 2: Array langsung diinisialisasi dengan nilai
    // string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; // ukuran otomatis

    // Mengakses elemen array secara manual (ascending)
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // Mengakses elemen array menggunakan loop (ascending)
    // for(int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // }

    // Mengakses elemen array secara descending (tulisanmu ada typo, harus i, bukan 1)
    // for (int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl;
    // }

    // Contoh Array Multidimensi (Matrix)
    // int matrix[2][3] = {{1, 3, 5}, {2, 4, 6}};
    // for(int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Contoh Matrix 4x6
    // int matrix[4][6] = {
    //     {1,2,3,4,5,6},
    //     {7,8,9,10,11,12},
    //     {13,14,15,16,17,18},
    //     {19,20,21,22,23,24}
    // };

    // Loop untuk print matrix rapi pakai tab
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << matrix[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // String sebagai array karakter
    // string nama = "Kiel";
    // for (int i=0; i<nama.length(); i++) {
    //     cout << nama[i] << endl; // cetak karakter per karakter
    // }

    // Contoh operasi string
    string s1 = "Hello";
    string s2 = "World";

    /* 1. Assignment string */
    // s1 = s2;  // isi s1 menjadi "World"
    // cout << "s1 = " << s1 << endl;

    /* 2. Concatenation (penambahan string) */
    // cout << "Hasil : " << s1 + s2 << endl; // "HelloWorld"

    /* 3. Panjang string */
    // cout << s1.length() << endl;          // 5
    // cout << (s1 + s2).length() << endl;   // 10

    /* 4. Substring */
    // cout << s1.substr(2, 3) << endl;      // "llo", mulai indeks 2 sepanjang 3 karakter
    // cout << (s1 + s2).substr(5, 3) << endl; // "Wor"

    // Contoh operator sizeof
    // int angka = 10;
    // cout << sizeof(angka) << endl; // biasanya 4 byte pada sistem 32/64 bit

    // int nilai[] = {10,20,30,40,50};
    // cout  << sizeof(nilai) << endl; // total byte array (5 elemen * ukuran int)

    string s = "Dave";
    cout << sizeof(s) << endl; 
    // sizeof untuk objek string C++ bukan panjang string tapi ukuran object string itu sendiri (biasanya 24 bytes di gcc)
}

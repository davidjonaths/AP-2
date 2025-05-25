#include <iostream>
using namespace std;

int main(){
    string kalimat; // variabel untuk menyimpan input kalimat
    int i;          // variabel indeks untuk loop

    system("CLS");  // membersihkan layar (Windows only)

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);  // membaca input kalimat dengan spasi

    // Loop untuk mengubah tiap karakter menjadi huruf kapital
    for(i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]); // fungsi toupper mengubah karakter jadi uppercase
    }

    // Output hasil kalimat yang sudah diubah jadi kapital
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0; // menandakan program selesai dengan sukses
}

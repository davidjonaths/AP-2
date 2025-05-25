#include <iostream>
using namespace std;

int main(){
    string kalimat; // variabel untuk menyimpan input kalimat dari user
    int i;          // variabel untuk indeks loop

    system("CLS");  // membersihkan layar (khusus Windows)

    cout << "Masukkan kalimat : "; 
    getline(cin, kalimat);  // membaca kalimat lengkap termasuk spasi

    // Loop untuk mengecek tiap karakter dalam kalimat
    for (i = 0; i < kalimat.length(); i++) {
        // Jika karakter adalah huruf vokal kecil (a, e, i, o, u)
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u')
        {
            // Ubah vokal kecil menjadi huruf kapital
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    // Tampilkan hasil kalimat dengan vokal yang sudah kapital
    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl;

    return 0; // program selesai dengan sukses
}

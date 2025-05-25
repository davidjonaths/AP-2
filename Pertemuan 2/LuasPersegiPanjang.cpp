#include <iostream>  // Header untuk input-output di C++
using namespace std;

int main() {

    float luas, p, l; // Deklarasi variabel float: luas, panjang (p), dan lebar (l)

    cout << "Masukkan panjang : ";
    cin >> p;  // Input nilai panjang
    
    cout << "Masukkan lebar : ";
    cin >> l;  // Input nilai lebar
    
    luas = p * l; // Menghitung luas = panjang × lebar

    cout << "luas = " << luas << endl; // Menampilkan hasil luas

    return 0; // Program selesai
}

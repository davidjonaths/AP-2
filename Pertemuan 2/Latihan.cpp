#include <iostream>       // Header untuk input-output C++
using namespace std;

const double PI = 3.141592653589793; // Konstanta PI dengan presisi tinggi

int main() {
    float luas, volume, r; // Variabel bertipe float untuk menyimpan hasil perhitungan dan jari-jari

    cout << "Masukkan jari-jari bola: ";
    cin >> r; // Input nilai jari-jari

    // Menghitung luas permukaan bola: 4 * π * r²
    luas = 4 * PI * r * r;
    cout << "Luas permukaan bola = " << luas << endl;

    // Menghitung volume bola: (4/3) * π * r³
    // ⚠️ Perhitungan (float(4/3)) salah karena 4/3 = 1 (pembagian bilangan bulat dilakukan dulu)
    // Hasil akhirnya tetap 1.0, bukan 1.333..., sehingga volume jadi salah.
    volume = (float(4) / 3) * PI * r * r * r; // ✅ Perbaikan: pastikan pembagian terjadi dalam float
    cout << "Volume bola = " << volume << endl;

    return 0; // Mengembalikan nilai 0 menandakan program selesai dengan sukses
}

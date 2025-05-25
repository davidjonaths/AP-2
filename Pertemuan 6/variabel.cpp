#include <iostream>
using namespace std;

// Variabel global, bisa diakses di semua fungsi
string namaGlobal = "Ilmu";

void namaVariabel (){
    // Variabel lokal, hanya bisa diakses di dalam fungsi ini saja
    string namaLokal = "Komputer";

    // Mengakses variabel lokal
    cout << namaLokal << endl;
}

int main () {
    namaVariabel();

    // Mengakses variabel lokal di luar fungsi akan error, karena scope-nya hanya di dalam fungsi
    // cout << namaLokal << endl; // Tidak bisa, variabel ini tidak dikenal di sini

    // Namun variabel global bisa diakses di sini
    cout << namaGlobal << endl;

    return 0;
}

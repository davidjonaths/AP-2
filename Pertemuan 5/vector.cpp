#include <iostream>
#include <vector>

using namespace std;

int main (){
    // Deklarasi dan inisialisasi vector bertipe string dengan beberapa nama karyawan
    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // Menampilkan isi vector dengan menggunakan loop biasa (index-based)
    // for(int i=0; i< nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    // Menampilkan isi vector menggunakan range-based for loop (lebih simpel)
    // for (string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // }

    // Menambahkan elemen baru di akhir vector dengan push_back()
    nama_karyawan.push_back("Imam");

    // Menampilkan vector setelah penambahan elemen (bisa dicoba dengan loop di atas)

    // Menghapus elemen terakhir dari vector menggunakan pop_back()
    nama_karyawan.pop_back();

    // Menghapus elemen pada posisi index ke-3 (elemen ke-4) menggunakan erase()
    nama_karyawan.erase(nama_karyawan.begin() + 3);

    // Menampilkan isi vector setelah penghapusan elemen
    for(int i=0; i< nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }
}

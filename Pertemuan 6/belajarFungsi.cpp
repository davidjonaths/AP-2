#include <iostream>
using namespace std;

// Fungsi sapa dengan parameter formal berupa string nama
void sapa(string nama){
    // Menampilkan pesan sapaan dengan nama yang diberikan
    cout << "Halo " << nama << " Selamat Datang di AP 2 !" << endl;
}

/*
Parameter formal adalah parameter yang didefinisikan saat fungsi dibuat, dalam hal ini 'nama'
Parameter aktual adalah nilai atau variabel yang dikirim ke fungsi saat fungsi dipanggil
*/

int main(){
    // Mendefinisikan variabel namaPengguna dengan nilai "Dave"
    string namaPengguna = "Dave";

    // Memanggil fungsi sapa dengan mengirimkan namaPengguna sebagai parameter aktual
    sapa(namaPengguna);

    return 0;
}

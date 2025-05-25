#include <iostream> 
using namespace std;

void sapa(string nama){
    cout << "Halo " << nama << " Selamat Datang di AP 2 !" << endl;
}
 //Parameter formal adalah parameter yang ada saat fungsi dibuat
 //Parameter Aktual adalah parameter yang digunakan saat dipanggil fungsi

int main(){
    string namaPengguna = "Dave";

    sapa(namaPengguna);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;


struct alamat {
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat alamat_mahasiswa;
};

int main(){
    Mahasiswa mhs1;

    mhs1.nama = "Dave";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    mhs1.alamat_mahasiswa.jalan = "Jl. Tasbih";
    mhs1.alamat_mahasiswa.kota = "Medan";
    mhs1.alamat_mahasiswa.kodepos = 20123;

    cout << "Alamat : " << mhs1.alamat_mahasiswa.jalan << " Kota " << mhs1.alamat_mahasiswa.kota << " Kodepos " << mhs1.alamat_mahasiswa.kodepos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa : ";cin >> n;
    
    for(int i = 0;i < n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cin.get();
        cout << "Masukkan Nama : ";getline(cin, mhs1.nama);
        cout << "Masukkan Umur : ";cin >> mhs1.umur;
        cout << "Masukkan ipk : ";cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i=0;i<n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }
}
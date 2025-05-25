#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariabel (){
    string namaLokal = "Komputer";

    // coba akses
    cout << namaLokal << endl;
}

int main () {
    namaVariabel();

    // coba akses
    // cout << namaLokal << endl; // ga iso

}
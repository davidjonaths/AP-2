#include <iostream>
#include <string>

using namespace std;

class ContohAkses {
private:
    int privateVar;    // hanya bisa diakses dalam class ini saja

protected:
    int protectedVar;  // bisa diakses dalam class ini dan turunannya

public:
    int publicVar;     // bisa diakses dari mana saja

    // constructor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << "privateVar = " << privateVar << endl;
        cout << "protectedVar = " << protectedVar << endl;
        cout << "publicVar = " << publicVar << endl;
    }
};

// kelas turunan
class turunan : public ContohAkses {
public:
    void aksesProtected() {
        cout << "akses publicVar: " << publicVar << endl;
        cout << "akses protectedVar: " << protectedVar << endl;
        // cout << "akses privateVar: " << privateVar << endl; // ERROR, tidak bisa akses privateVar
    }
};

int main() {
    system("cls");

    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << "publicVar = " << obj.publicVar << endl;
    // cout << obj.protectedVar << endl; // ERROR, tidak bisa akses protected dari luar class/turunan
    // cout << obj.privateVar << endl;   // ERROR, tidak bisa akses private dari luar class

    turunan tur;
    tur.aksesProtected();

    return 0;
}


#include <iostream>
#include <string>

using namespace std;

class ContohAkses {
    private:
       int privateVar;
    
    protected:
       int protectedVar;

    public:
       int publicVar;

       // constructor
       ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
       }
      

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// kelas turunan
class turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << "akses publicVar" << publicVar << endl;
        cout << "akses protectedVar" << protectedVar << endl;
    }
};

int main () {
    system ("cls");

    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl; //erorrrrrrrrrrrrrrrr
    // cout << obj.privateVar << endl; //erorrrrrrrrrrrrrr

      tur;
    tur.aksesProtected();
}
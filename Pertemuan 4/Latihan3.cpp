#include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = ""; // expected untuk menyimpan pola yang dibangun

    cout << "Masukkan kata sandi : ";
    cin >> password;  // input kata sandi pertama

    cout << "Masukkan kata : ";
    cin >> sandi;     // input kata kedua yang akan dicek pola

    // Membuat string expected berdasarkan pola bertingkat dari password
    // Contoh: jika password = "abc", expected = "a" + "ab" + "abc" = "aababc"
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    }

    // Membandingkan apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl; // pola cocok
    } else {
        cout << "Tulisan agen salah" << endl; // pola tidak cocok
    }

    return 0;
}

#include <iostream>
using namespace std;

int main () {
    int nilai;

    system("CLS"); // membersihkan layar (Windows only)

    cout << "Masukkan nilai : ";
    cin >> nilai;  // input nilai dari user

    // Contoh if statement sederhana
    /*
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    }
    */

    // Contoh if-else statement
    /*
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    } else {
        cout << "Anda lulus!" << endl;
    }
    */

    // Contoh if-else if-else statement (perbaikan sintaks)
    /*
    if (nilai == 100) {
        cout << "Anda keceh" << endl;
    } else if (nilai <= 65) {  // perbaikan: tanda kurung if-else if yang benar
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus!" << endl;
    }
    */

    // Contoh nested if
    /*
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    } else {
        if (nilai == 100) {
            cout << "Anda lulus dan hebat" << endl;
        } else {
            cout << "Anda lulus" << endl;
        }
    }
    */

    // Contoh switch case untuk hari
    /*
    switch (nilai) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "Inputan tidak valid" << endl;
            break;
    }
    */

    // ***Catatan: C++ standar tidak mendukung range case seperti Swift***
    // Contoh switch range (tidak valid di C++)
    /*
    switch (nilai) {
        case 85 ... 100 : cout << "A" << endl; break; // tidak valid di C++
        case 80 ... 84 : cout << "B+" << endl; break;
        // dan seterusnya...
        default: cout << "E" << endl;
    }
    */

    // Ternary Operator (penggunaan operator ternary benar)
    if (nilai % 2 == 0) {
        cout << "Genap sih" << endl;
    } else {
        cout << "Ganjil sih" << endl;
    }

    // Perbaikan penggunaan ternary yang kamu coba:
    // "a > 5 ? 9 : 6" ini tidak lengkap dan tidak perlu di sini
    // Berikut versi yang benar:
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh Bilangan " << checkNum << " sih " << endl;

    return 0;
}

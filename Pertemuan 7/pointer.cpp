#include <iostream>
using namespace std;

// Fungsi penjumlahan biasa, hanya mencetak hasil penjumlahan
void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

// Fungsi penjumlahan menggunakan pointer, nilai 'a' diubah langsung lewat alamatnya
void penjumlahanPointer(int *a, int *b) {
    *a += *b;  // Mengubah nilai yang ditunjuk pointer a dengan menambahkan nilai yang ditunjuk pointer b
    cout << *a << endl;
}

int main () {
    system("CLS");

    // Deklarasi variabel biasa dan pointer yang menunjuk ke variabel tersebut
    int number = 35;
    int *pointer_number = &number;

    // Contoh akses nilai dan alamat memori
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi pointer_number (alamat number) = " << pointer_number << endl;
    // cout << "Nilai yang ditunjuk pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // Contoh mengubah nilai melalui pointer
    // *pointer_number = 25; // merubah isi variabel number lewat pointer

    // Pointer dan array
    // int num[] = {1, 2, 3, 4, 5};
    // int *pointer_num = num; // pointer menunjuk ke elemen pertama array
    // cout << "Elemen pertama num = " << *pointer_num << endl;

    // Mengubah nilai elemen array lewat pointer
    // *pointer_num += 5;  // menambah nilai elemen pertama array sebanyak 5

    // Pointer sebagai parameter fungsi
    // int num1 = 5, num2 = 7;
    // penjumlahan(num1, num2); // hasil penjumlahan tanpa mengubah num1 dan num2
    // penjumlahanPointer(&num1, &num2); // mengubah nilai num1 langsung lewat pointer

    // Pointer ke pointer (pointer ganda)
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;
    // cout << "Nilai score: " << score << endl;
    // cout << "Nilai lewat pointer_score: " << *pointer_score << endl;
    // cout << "Nilai lewat ptr_pointer_score: " << **ptr_pointer_score << endl;

    // Pointer dinamis (alokasi memori secara dinamis)
    int *ptr = new int;  // alokasi memori untuk 1 int secara dinamis
    *ptr = 30;           // isi nilai yang ditunjuk pointer ptr
    cout << "Nilai ptr = " << *ptr << " dan alamat ptr = " << ptr << endl;

    delete ptr;  // membebaskan memori yang dialokasikan secara dinamis

    // Setelah delete, isi ptr tidak terdefinisi lagi, sebaiknya jangan akses lagi
    // cout << "Nilai ptr setelah delete = " << *ptr << endl; // undefined behavior

    return 0;
}

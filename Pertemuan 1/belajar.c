#include <stdio.h>   // Header standar untuk fungsi input-output
#include <conio.h>   // Digunakan untuk getch(), namun tidak portabel (hanya tersedia di Windows/Turbo C)

int main() {
    char nama[50];   // Menyimpan nama pengguna (string maksimal 49 karakter + null-terminator)
    int nim;         // Menyimpan NIM (nomor induk mahasiswa)
    char kom[2];     // Menyimpan kode kelas, tapi terlalu kecil jika lebih dari 1 huruf
    float ip;        // Menyimpan nilai IP (Indeks Prestasi)

    printf("Hello World\n"); // Output awal ke layar

    printf("Masukkan nama : ");
    gets(nama);  // ⚠️ Tidak aman, rawan buffer overflow. Disarankan ganti dengan fgets(nama, sizeof(nama), stdin);

    printf("Masukkan nim : ");
    scanf("%d", &nim);  // Membaca input angka (integer) untuk NIM

    getchar(); // Membersihkan karakter newline dari buffer agar tidak terbaca oleh gets() berikutnya

    printf("Masukkan kom : ");
    gets(kom);  // ⚠️ Sama seperti sebelumnya, tidak aman. Buffer juga terlalu kecil. Disarankan perbesar ukuran array dan gunakan fgets()

    printf("Masukkan ip : ");
    scanf("%f", &ip);  // Membaca input angka pecahan (float) untuk IP

    /* Output hasil input */
    printf("Nama : ");
    puts(nama);  // Menampilkan string dengan newline otomatis

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);  // Menampilkan kode kelas

    printf("IP : %f\n", ip);  // Menampilkan IP dengan format float

    printf("press any button to continue...");
    getch(); // Menunggu input tombol sebelum program berakhir (khusus di Windows)
}

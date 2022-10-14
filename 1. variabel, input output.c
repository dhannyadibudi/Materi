#include <stdio.h>

int main(){

    //Deklarasi Variabel
    //tipe_data nama_variabel;
    int angka;
    char karakter;
    float _desimal;

    //Insialisasi Variabel (Mengisi Variabel)
    //nama_variabel = isi;
    angka = 100;
    karakter = '@';
    _desimal = -2.1;

    //Deklarasi + Inisialisasi Variabel
    //tipe_data nama_variabel = isi;
    int x = 0;

    //memanggil / menggunakan variabel menggunakan nama dari variabel
    //mencetak nilai variabel
    printf("%d", angka);
    printf("\n"); // cetak baris baru


    printf("%c", karakter);
    printf("\n"); // cetak baris baru

    printf("%f", _desimal);
    printf("\n"); // cetak baris baru

    /*
    format specifier variabel
    int -> %d atau %i
    char -> %c
    float -> %f
    */


    //input user
    // menggunakan scanf("%format_specifier", &nama_variabel)
    printf("Masukkan angka : ");//petunjuk mengisi
    scanf("%d", &angka);

    printf("Masukkan karakter : ");//petunjuk mengisi
    scanf(" %c", &karakter);


    printf("Masukkan desimal : ");//petunjuk mengisi
    scanf("%f", &_desimal);

    //output
    //printf("%format_specifier", nama_variabel)
    printf("%d", angka);
    printf("\n");//cetak baris baru

    printf("%c", karakter);
    printf("\n");//cetak baris baru

    printf("%f", _desimal);
    printf("\n");//cetak baris baru

    return 0;

}

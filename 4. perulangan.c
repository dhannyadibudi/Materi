#include <stdio.h>

int main(){

    //Format penulisan for
    //for(nilai awal; kondisi; proses){
    //    yang diulang;
    //}
//    int input;
//    scanf("%d", &input);
//
//    for (int i = 1; i <= input; i++){
//        printf("%d ", i);
//    }

//     Bikin Segitiga
//    int n;
//    printf("Masukkan nilai : ");
//    scanf("%d", &n);
//    for(int i=1;i<=n;i++){
//        for(int j = n; j<=i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int x =0; x < 3; x++){
//        printf("*");
//    }



// While
/*
    nilai awal;
    While(kondisi){
        yang diulang;
    }
*/

//    while(x != 0){
//        printf("masukkan angka : ");
//        scanf("%d", &x);
//        printf("angka yang diinput : %d\n", x);
//    }


//Do While
    int x = 1;
    do{
        printf("masukkan angka : ");
        scanf("%d", &x);
        printf("angka yang diinput : %d\n", x);

    }while(x != 0);

    return 0;
}

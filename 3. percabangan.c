#include <stdio.h>

int main(){
    int a,b;
    char x;
    printf("Menu\n");
    printf("a. Menu 1\n");
    printf("b. Menu 2\n");
    printf("c. Menu 3\n");
    printf("Masukkan pilihan anda : ");
    scanf(" %c", &x);
    if(x == '1'){
        printf("Ini menu 1");
    }else if(x == '2'){
        printf("Ini menu 2");
    }else if(x == '3'){
        printf("Ini menu 3");
    }else{
        printf("Tidak ada dipilihan");
    }
    // switch (x)
    // {
    // case 'a':
    //     printf("Ini menu 1");
    //     break;
    // case 'b': printf("ini Menu 2");break; 
    // case 'c':printf("ini menu 3"); break;
    // default:
    //     printf("Tidak ada dipilihan");
    //     break;
    // }
    return 0;
}
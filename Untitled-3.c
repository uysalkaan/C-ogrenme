#include <stdio.h>

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi == 1) {
        printf("Hoş geldiniz!\n");
    } else if (sayi == 2) {
        printf("Elveda!\n");
    } else {
        printf("Geçersiz sayi girdiniz.\n");
    }
        return 0;
}

    
    
        
#include <stdio.h>

int main() {
    int sayi;

    while (1) {  // sonsuz döngü
        printf("Bir sayı giriniz (çıkmak için 0): ");
        scanf("%d", &sayi);

        if (sayi == 0) {
            printf("Program sonlandırılıyor...\n");
            break;  // döngüden çık
        } else if (sayi == 1) {
            printf("Hoş geldiniz!\n");
        } else if (sayi == 2) {
            printf("Elveda!\n");
        } else {
            printf("Geçersiz sayı girdiniz.\n");
        }
        printf("merhaba\n");
    }

    return 0;
}


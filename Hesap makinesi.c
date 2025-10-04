#include <stdio.h>

int main() {
    int sayi1, sayi2, secim;

    while (1) {
        printf("1.sayiyi giriniz: ");
        scanf("%d", &sayi1);
        printf("2.sayiyi giriniz: ");
        scanf("%d", &sayi2);

        printf("\nIslem seciniz:\n");
        printf("1. toplama\n");
        printf("2. cikarma\n");
        printf("3. carpma\n");
        printf("4. bolme\n");
        printf("0. cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        if (secim == 0) {
            printf("Cikis yapiliyor...\n");
            break;
        }

        switch (secim) {
            case 1:
                printf("Sonuc: %d\n", sayi1 + sayi2);
                break;
            case 2:
                printf("Sonuc: %d\n", sayi1 - sayi2);
                break;
            case 3:
                printf("Sonuc: %d\n", sayi1 * sayi2);
                break;
            case 4:
                if (sayi2 != 0) {
                    printf("Sonuc: %.2f\n", (float)sayi1 / sayi2);
                } else {
                    printf("Hata: Sifira bolme yapilmaz.\n");
                }
                break;
            default:
                printf("Gecersiz secim yaptiniz.\n");
        }
    }

    return 0;
}

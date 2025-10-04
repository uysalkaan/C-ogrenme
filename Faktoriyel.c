#include <stdio.h>

int main() {
    int sayi, i;
    unsigned long long faktoriyel = 1;

    printf ("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    if (sayi < 0)
        printf("Negatif sayıların faktoriyeli hesaplanamaz.\n");
        else {
            for(i = 1; i <= sayi; ++i) {
                faktoriyel *= i;
            }
            printf("%d! = %llu\n", sayi, faktoriyel);
        }
        return 0;
    }
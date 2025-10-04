#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main() {
    int sayi, tahmin, deneme = 0;
    srand(time(NULL));
    sayi = rand() % 100 + 1; // 1 ile 100 arasında rastgele sayi uret
    printf("1 ile 100 arasinda bir sayi tuttum tahmin et!\n");
    do {
        printf("Tahmininiz: ");
        scanf("%d", &tahmin);
        deneme++;
        if (tahmin < sayi) {
            printf("Daha büyük bir sayi deneyin.\n");
        } else if (tahmin > sayi) {
            printf("Daha küçük bir sayi deneyin.\n");
        } else {
            printf("Tebrikler! %d denemede bildiniz.\n", deneme);
        }
    } while (tahmin != sayi);
    return 0;
 }
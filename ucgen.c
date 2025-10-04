#include <stdio.h>
int main() {
    int satir, i, j;

    printf("Ucgen satir sayisini giriniz: ");
    scanf("%d", &satir);

    for(i = 1; i <= satir; ++i) {
        for(j=1; j <= i; ++j) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
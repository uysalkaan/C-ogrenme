#include <stdio.h>

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (int i = 3; i < sayi; i++) {
        printf("Hello, World!\n");
    }
    return 0;
}

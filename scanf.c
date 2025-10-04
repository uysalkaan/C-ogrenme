#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Merhaba! Lütfen bir metin giriniz: ");
    scanf("%99s", input); // Sadece ilk kelimeyi alır
    printf("Girdiğiniz metin: %s\n", input);
    return 0;
}



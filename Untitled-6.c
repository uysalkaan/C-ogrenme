#include <stdio.h>

 int main() {
    int en, boy;

    printf("Dikdörtgenin enini giriniz: ");
    scanf("%d", &en);

    printf("Dikdörtgenin boyunu giriniz: ");
    scanf("%d", &boy);

    printf("\n");

    for (int i = 0; i < boy; i++) {
        for (int j = 0; j < en; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
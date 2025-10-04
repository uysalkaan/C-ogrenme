#include <stdio.h>

int main() {
    int sayilar[5];
    int i, toplam = 0;
    int min, max;
    float ortalama;

    // Kullanıcıdan 5 sayı al
    printf("5 adet sayi giriniz:\n");
    for(i = 0; i < 5; i++) {
        printf("%d, sayi: ", i + 1);
        scanf("%d" , &sayilar[i]);
    }
    // Diziyi ekrana yazdır
    printf("\nDizinin elemanlari: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");
    // Maksimum ve minimum değerleri bul
    min = max = sayilar[0]; // ilk elemana ata
    for(i = 1; i < 5; i++) {
        if(sayilar[i] > max) {
            max = sayilar[i];
        }
        if(sayilar[i] < min) {
            min = sayilar[i];
        }
    }
    // toplam ve ortalama hesapla
    for(i = 0; i < 5; i++) {
        toplam += sayilar[i];
    }
    ortalama = (float)toplam / 5;
    // Sonuçları ekrana yazdır
    printf("En büyük sayi: %d\n", max);
    printf("En küçük sayi: %d\n", min);
    printf("Toplam: %d\n", toplam);
    printf("Ortalama: %.2f\n", ortalama);

    return 0;
}

    
    


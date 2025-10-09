#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    vector<string> kelimeler = {
        "bilgisayar", "programlama", "oyun", "yazilim", "donanim",
        "internet", "algoritma", "sistem", "muz", "armut", "elma",
        "kitap", "defter", "kalem", "masa", "sandalye", "telefon",
        "kamera", "televizyon", "radyo", "mikrofon", "hoparlor",
        "kulaklik", "beyin", "kalp", "akciger", "mide", "karaciger",
        "bobrek", "kas", "kemik", "deri", "goz", "kulak", "burun",
        "agiz", "dis", "dil", "el", "kol", "bacak", "ayak", "parmak",
        "tavsan", "kedi", "kopek", "kus", "balik", "at", "inek", "koyun",
        "keci", "aslan", "kaplan", "fil", "zebra", "maymun", "yilan",
        "timsah", "kaplumbaga", "kartal", "baykus", "penguen", "balina",
        "orko", "ahtapot", "deniz", "gunes", "ay", "yildiz", "bulut",
        "yagmur", "kar", "firtina", "ruzgar", "gokkusagi", "orman",
        "dag", "nehir", "gol", "adalar", "plaj", "kumsal", "kale",
        "saray", "ev", "daire", "okul", "universite", "hastane",
        "eczane", "market", "pazar", "restoran", "kafe", "otel",
        "muze", "galeri", "sinema", "tiyatro", "park", "bahce",
        "cami", "kilise", "sinagog", "tapinak", "kutuphane", "spor",
        "futbol", "basketbol", "voleybol", "tenis", "yuzme", "kosu",
        "bisiklet", "araba", "otobus", "tren", "ucak", "gemi",
        "motorsiklet", "kamyon", "taksi", "polis", "itfaiye",
        "ambulans", "asker", "doktor", "ogretmen", "muhendis",
        "avukat", "satici", "mudur", "sekreter", "gazeteci", "yazar",
        "sanatci", "muzisyen", "oyuncu", "dansci", "sarkici", "resim",
        "heykel", "fotograf", "muzik", "edebiyat", "tarih", "cografya",
        "felsefe", "psikoloji", "sosyoloji", "matematik", "fizik",
        "kimya", "biyoloji", "astronomi", "jeoloji", "ekonomi",
        "siyaset", "hukuk"
    };

    srand(time(0));
    string kelime = kelimeler[rand() % kelimeler.size()];
    string tahminEdilen(kelime.size(), '_');
    vector<char> yanlisHarfler;
    int kalanHak = 6;

    cout << "=== Kelime Tahmin Oyunu ===" << endl;
    cout << "Kelimeyi tahmin etmeye calis (toplam 6 hakkin var)." << endl;

    while (kalanHak > 0 && tahminEdilen != kelime) {
        cout << "\nKelime: " << tahminEdilen << endl;
        cout << "Yanlis harfler: ";
        for (char h : yanlisHarfler) cout << h << ' ';
        cout << "\nKalan hak: " << kalanHak << endl;

        cout << "Bir harf tahmin et: ";
        char harf;
        cin >> harf;

        harf = tolower(harf);
        if (kelime.find(harf) != string::npos) {
            for (size_t i = 0; i < kelime.size(); ++i) {
                if (kelime[i] == harf) {
                    tahminEdilen[i] = harf;
                }
            }
            cout << "Dogru tahmin!" << endl;
        } else {
            if (find(yanlisHarfler.begin(), yanlisHarfler.end(), harf) == yanlisHarfler.end()) {
                yanlisHarfler.push_back(harf);
                kalanHak--;
                cout << "Yanlis tahmin!" << endl;
            } else {
                cout << "Bu harfi zaten tahmin ettin." << endl;
            }
        }
    } 

    if (tahminEdilen == kelime) {
        cout << "\nTebrikler Kazandin! " << kelime << endl;
    } else {
        cout << "\nKaybettin. Dogru kelime: " << kelime << endl;
    }

    return 0;
} 

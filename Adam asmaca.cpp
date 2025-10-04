#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string kelime = "Yavşak ferhat";
    string tahminEdilen(kelime.size(), '_');
    vector<char> yanlisHarfler;
    int kalanHak = 6;

    cout << "=== Kelime Tahmin Oyunu ===" << endl;
    cout << "Kelimeyi tahmin etmeye calis(toplam 6 hakkin var)." << endl;

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
        cout << "\nWp kardesim " << kelime << endl;
    } else {
        cout << "\nLoser " << kelime << endl;
        cout << "Dogru kelime: " << kelime << endl;
    }
    return 0;
}

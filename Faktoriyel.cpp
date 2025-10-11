#include <iostream>
#include <limits>
using namespace std;

unsigned long long faktoriyelHesapla(int n, bool &tasmaVarMi) {
    unsigned long long sonuc = 1;
    tasmaVarMi = false;

    for (int i = 1; i <= n; i++) {
        if (sonuc > numeric_limits<unsigned long long>::max() / i) {
            tasmaVarMi = true;
            break;
        }
        sonuc *= i;
    }

    return sonuc;
}
int main() {
    int sayi;

    while (true) {
        cout << "\nPozitif bir sayi giriniz (cikis icin -1): ";
        cin >> sayi;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Gecersiz girdi. Lutfen bir sayi giriniz.\n";
            continue;
        }
        if (sayi == -1) {
            cout << "Program sonlandiriliyor...\n";
            break;
        }
        if (sayi < 0) {
            cout << "Pozitif bir sayi giriniz.\n";
            continue;
        }
        bool tasma = false;
        unsigned long long faktoriyel = faktoriyelHesapla(sayi, tasma);

        if (tasma) 
            cout << sayi << "! degeri cok buyuk hesaplanamiyor (tasma olustu).\n";
        else
            cout << sayi << "! = " << faktoriyel << endl;
    
        }
    return 0;
}

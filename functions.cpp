#include <cmath>
#include <iostream>
using namespace std;

bool asalMiOptimized(int sayi) {
    if (sayi <= 1) return false;
    if (sayi == 2) return true;
    if (sayi % 2 == 0) return false;
    for (int i = 3; i * i <= sayi; i += 2) {
        if (sayi % i == 0) return false;
    }
    return true;
}
int main() {
    int s;
    while (true) {
        cout << "\nBir sayi giriniz (Cikmak icin 0 giriniz): ";
        cin >> s;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Gecersiz girdi. Lütfen bir sayi giriniz.\n";
            continue;
        }
        if (s == 0) {
            cout << "Program sonlandiriliyor...\n";
            break;
        }
        if (asalMiOptimized(s)) {
            cout << s << " bir asal sayidir.\n";
        } else {
            cout << s << " bir asal sayi degildir.\n";
        }
    }
    return 0;
}


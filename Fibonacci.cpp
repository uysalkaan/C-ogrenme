#include <iostream>
using namespace std;

void fibonacciYazdir(int n) {
    int a = 0, b = 1, c;

    cout << "Fibonacci dizisi (" << n << " eleman): ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
     }
     cout << endl;
}
int main() {
    int n;
    char devam;
    cout << "Kac elemanli Fibonacci dizisi istiyorsunuz? ";
    while (true) {
        cin >> n;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Gecersiz girdi. Lutfen bir sayi giriniz.\n";
            continue;
        }
        if (n <= 0) {
            cout << "Pozitif bir sayi giriniz.\n";
            continue;
        }
        fibonacciYazdir(n);

        cout << "\nYeni bir sayi denemek ister misiniz? (E/e = evet, H/h = hayir): ";
        cin >> devam;
        if (devam == 'E' || devam == 'e') {
            cout << "Kac elemanli Fibonacci dizisi istiyorsunuz? ";
            continue;
        } else {
            cout << "Program sonlandiriliyor...\n";
            break;
        }
    }
    return 0;
}

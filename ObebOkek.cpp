#include <iostream>
using namespace std;

long long obeb(long long a, long long b) {
    while (b != 0) {
        long long  gecici = b;
        b = a % b;
        a = gecici;
    }
    return a;
}
long long okek(long long a, long long b) {
    return (a * b) / obeb(a, b);
}
int main() {
    long long sayi1, sayi2;
    cout << "Birinci sayiyi giriniz ";
    cin >> sayi1;

    cout << "İkinci sayiyi giriniz ";
    cin >> sayi2;

    if (cin.fail()) {
        cout << "Lutfen gecerli sayi giriniz.\n";
        return 0;
    }
    if (sayi1 == 0 || sayi2 == 0) {
        cout << "Sifirin OBEB ve OKEK'i yok haberin olsun.\n";
        return 0;
    }
    cout << "\nOBEB(" << sayi1 << ", " << sayi2 << ") = " << obeb(sayi1, sayi2);
    cout << "\nOKEK(" << sayi1 << ", " << sayi2 << ") = " << okek(sayi1, sayi2);
    
    return 0;
}
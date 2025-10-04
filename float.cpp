#include <iostream>
using namespace std;
int main()
{
    float sayi1, sayi2, toplam, fark, carpim, bolum;

    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    bolum = sayi1 / sayi2;
    cout << "Toplam: " << toplam << endl;
    cout << "Fark: " << fark << endl;
    cout << "Carpim: " << carpim << endl;
    cout << "Bolum: " << bolum << endl;
    return 0;
}

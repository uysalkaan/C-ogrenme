#include <iostream>
using namespace std;

int main() {
    int secim;
    double bakiye = 0.0;
    double miktar;

    cout << "=== Mini Banka Uygulamasina Hosgeldiniz ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Bakiye Goster" << endl;
        cout << "2. Para Yatir" << endl;
        cout << "3. Para Cek" << endl;
        cout << "4. Cikis" << endl;
        cout << "Seciminizi yapiniz: ";
        cin >> secim;

        switch (secim) {
            case 1:
                cout << "Bakiyeniz: " << bakiye << " TL" << endl;
                break;

            case 2:
                cout << "Yatirmak istediginiz miktar: ";
                cin >> miktar;
                if (miktar > 0) {
                    bakiye += miktar;
                    cout << miktar << " TL bakiyenize eklendi." << endl;
                } else {
                    cout << "Gecersiz miktar!" << endl;
                }
                break;

            case 3:
                cout << "Cekmek istediginiz miktar: ";
                cin >> miktar;
                if (miktar > 0 && miktar <= bakiye) {
                    bakiye -= miktar;
                    cout << miktar << " TL cekildi." << endl;
                } else if (miktar > bakiye) {
                    cout << "Yetersiz bakiye!" << endl;
                } else {
                    cout << "Gecersiz miktar!" << endl;
                }
                break;

            case 4:
                cout << "Cikis yapiliyor... Iyi gunler!" << endl;
                break;

            default:
                cout << "Hatali secim yaptiniz. Tekrar deneyin." << endl;
        }

    } while (secim != 4);

    return 0;
}

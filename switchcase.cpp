#include <iostream>
using namespace std;

int main() {
    int secim;

    cout << "1 - Merhaba yazdir" << endl;
    cout << "2 - Elveda yazdir" << endl;
    cout << "3 - Programi bitir" << endl;
    cout << "Seciminizi yapiniz: ";
    cin >> secim;

    switch (secim) {
        case 1:
            cout << "Merhaba!" << endl;
            break;
        case 2:
            cout << "Elveda!" << endl;
            break;
        case 3:
            cout << "Program sonlandirildi." << endl;
            break;
        default:
            cout << "Gecersiz secim yaptiniz." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;   
    int main() {
        int secim;

        cout << "1 - Merhaba!" << endl;
        cout << "2 - Görüşürüz!" << endl;
        cout << "Bir seçim yapın (1 veya 2): ";
        cin >> secim;

        if (secim == 1) {
            cout << "Merhaba!" << endl;
        } else if (secim == 2) {
            cout << "Görüşürüz!" << endl;
        } else {
            cout << "Geçersiz seçim yaptınız." << endl;
        }
        return 0;
    }
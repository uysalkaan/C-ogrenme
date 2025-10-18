#include <iostream>
#include <string>
using namespace std;

int main () {
    bool p, q;
    string choice;

    cout << "Mantik islemlerine Hos Geldiniz!\n";
    cout << "p ve q degerlerini giriniz (0 veya 1): ";
    cout << "p= ";
    cin >> p;
    cout << "q= ";
    cin >> q;

    cout << "\nHangi islemi yapmak istiyorsunuz?\n";
    cout << "Secenekler: ve, veya, degil, ise, ancak ve ancak\n";
    cout << "Seciminiz: ";
    cin >> choice;

    bool result;

    if (choice == "ve") {
        result = p && q;
        cout << "Sonuc (p ∧ q): " << result << endl;
    }
    else if (choice == "veya") {
        result = p || q;
        cout << "Sonuc (p v q): " << result << endl;
    }
    else if (choice == "degil") {
        result = !p;
        cout << "Sonuc (¬p): " << result << endl;
        result = !q;
        cout << "Sonuc (¬q): " << result << endl;
    }
    else if (choice == "ise") {
         result = (!p) || q;
         cout << "Sonuc (p → q): " << result << endl;
    }
    else if (choice == "ancak") {
        result = (p && q) || (!p && !q);
        cout << "Sonuc (p ↔ q): " << result << endl;
    }
    else {
        cout << "Gecersiz secim yaptiniz. " << endl;
    }
    return 0;
}
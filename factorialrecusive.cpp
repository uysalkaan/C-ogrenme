#include <iostream>
#include <limits>
using namespace std;

unsigned long long factorial(int n, bool &overflow) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long partial = factorial(n - 1, overflow);
    if (overflow) return 0;
    if (partial > numeric_limits<unsigned long long>::max() / n) {
        overflow = true;
        return 0;
    }
    return n * partial;
}
int main() {
    int number;

    while (true) {
        cout << "Pozitif bir tamsayi giriniz (cikmak icin -1): ";
        cin >> number;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Gecersiz girdi. Lutfen bir tamsayi giriniz." << endl;
            continue;
        }
        if (number == -1) {
            cout << "Program sonlandiriliyor..." << endl;
            break;
        }
        if (number < 0) {
            cout << "Gecersiz girdi. Lutfen pozitif bir tamsayi giriniz." << endl;
            continue;
        }

        bool overflow = false;
        unsigned long long result = factorial(number, overflow);

        if (overflow) 
            cout << number << "! degeri cok buyuk hesaplanamiyor (tasma olustu). " << endl;
        else 
            cout << number << "! = " << result << endl;
        }
    return 0;
}
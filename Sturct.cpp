#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Product {
    string name;
    double price;
    int stock;

void showInfo() {
    cout << "Urun: " << name << endl;
    cout << "Fiyat: " << price << endl;
    cout << "Stokta: " << stock << endl;
}
void applyDiscount(double percent) {
    price = price - (price * percent / 100);
    cout << "Yeni Fiyat (" << percent << "% indirim uygulandi): " << price << "TL" << endl;
}
void checkStock() {
    if (stock > 0)
       cout << "Stokta var. " << endl;
    else
       cout << "Ürün Tükendi. " << endl;
}
};
int main() {
    Product urun1 = {"Mouse", 250.0, 5};

    urun1.showInfo();
    urun1.applyDiscount(20);
    urun1.checkStock();

    return 0;
}
#include "book.h"

int main () {
    int n;
    cout << "Kac kitap gireceksiniz: ";
    cin >> n;
    cin.ignore();

    Book* books = new Book[n];

    for (int i = 0; i < n; i++) {
        cout << "\n" << (i + 1) << ". Kitap Adi: ";
        getline(cin, books[i].title);

        cout << "Yazar: ";
        getline(cin, books[i].author);

        cout << "Sayfa Sayisi: ";
        cin >> books[i].pages;

        cout << "Fiyat (TL): ";
        cin >> books[i].price;
        cin.ignore();
    }
    cout << "\n-----Kitaplar Listesi-----\n";
    for (int i = 0; i < n; i++) 
        books[i].showInfo();

    Book expensive = findMostExpensiveBook(books, n);
        cout << "\nEn pahali kitap: " << expensive.title
             << " (" << expensive.price << " TL)\n";

             delete[] books;
             return 0;
}
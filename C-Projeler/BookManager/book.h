#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int pages;
    double price;

    void showInfo() {
        cout << "Kitap: " << title << endl;
    cout << "| Yazar: " << author << endl;
    cout << "| Sayfa: " << pages << endl;
    cout << "| Fiyat: " << price << " TL" << endl;
    }
} ;

Book findMostExpensiveBook(Book books[], int count);

#endif
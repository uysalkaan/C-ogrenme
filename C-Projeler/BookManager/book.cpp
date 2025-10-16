#include "book.h"

Book findMostExpensiveBook(Book books[], int count) {
    if (count == 0) {
        cout << "Hiç kitap yok! " << endl;
        return Book{"", "", 0, 0.0};
    }
    Book maxBook = books[0];
    for (int i = 1; i < count; i++) {
        if (books[i].price > maxBook.price)
            maxBook = books[i];
    }
    return maxBook;
}


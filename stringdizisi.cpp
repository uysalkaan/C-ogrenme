#include <iostream>
#include <string>
using namespace std;

string findLongestWord(const string words[], int length) {
    string longest = words[0];
    for (int i = 1; i < length; i++) {
        if (words[i].length() > longest.length()) {
            longest = words[i];
        }
    }
    return longest;
}

int main() {
    int wordCount;
    cout << "Kac kelime girmek istiyorsunuz? ";
    cin >> wordCount;

    string words[wordCount];
    cin.ignore(); // \n karakterini temizler

    for (int i = 0; i < wordCount; i++) {
        cout << i + 1 << ". kelimeyi giriniz: ";
        getline(cin, words[i]);
    }

    string longestWord = findLongestWord(words, wordCount);
    cout << "\nEn uzun kelime: " << longestWord << endl;

    return 0;
}

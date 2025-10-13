#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    cout << "Bir cumle giriniz: ";
    getline(cin, sentence);

    map<char, int> frequency;
    for (char ch : sentence) {
        
        if (isalpha(static_cast<unsigned char>(ch))) {
            char c = tolower(static_cast<unsigned char>(ch));
            frequency[c]++;
        }
    }

    cout << "\nHarf Frekanslari :\n";
    for (const auto &pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\nToplam farkli harf sayisi: " << frequency.size() << endl;

    char mostFrequent = '\0';
    int maxCount = 0;

    for (const auto &pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    if (mostFrequent != '\0') {
        cout << "En cok kullanilan harf: '" << mostFrequent << "' (" << maxCount << " kez)\n";
    } else {
        cout << "Harf bulunamadi.\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int calculateSum(const int scores[], int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += scores[i];
    }
    return sum;
}

int main() {
    int length;
    cout << "Bir not sayisi giriniz: ";
    cin >> length;
    if (cin.fail() || length <= 0) {
        cout << "Gecersiz girdi. Lutfen pozitif bir tamsayi giriniz.\n";
        return 0;
    }
    int grades[length];

    for (int i = 0; i < length; ++i) {
        cout << "Not giriniz: " << i + 1 << ": ";
        cin >> grades[i];
        if (cin.fail() || grades[i] < 0 || grades[i] > 100) {
            cout << "Gecersiz girdi. Lutfen 0 ile 100 arasinda bir not giriniz.\n";
            return 0;
        }
    }
    int total = calculateSum(grades, length);
    double average = static_cast<double>(total) / length;
    cout << "\nToplam Not: " << total << "\n";
    cout << "\nOrtalama Not: " << average << "\n";
    return 0;
}


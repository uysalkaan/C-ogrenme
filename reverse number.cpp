#include <iostream>
#include <limits>
using namespace std;

int main()
{
    while (true)
    {
        cout << "1 - Sayiyi tersten yazdir" << endl;
        cout << "2 - Cikis" << endl;
        cout << "Seciminizi yapiniz: ";
        int secim;
        cin >> secim;
        if (secim == 2)
        {
            cout << "Program sonlandiriliyor." << endl;
            return 0;
        }
        else if (secim != 1)
        {
            cout << "Gecersiz secim yaptiniz." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Bir sayi giriniz: ";
        int n;
        while (true)
        {
            if (!(cin >> n))
            { // check if input failed
                cout << "Gecersiz giris! Lutfen bir sayi giriniz." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                cout << "Bir sayi giriniz: ";
            }
            else
            {
                break;
            }
        }

        // now safe to use n
        if (n % 2 == 0)
            cout << "Girdiginiz sayi cift." << endl;
        else
            cout << "Girdiginiz sayi tek." << endl;

        int reversed = 0, temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            temp /= 10;
            reversed = reversed * 10 + digit;
        }
        cout << "Ters cevrilmis sayi: " << reversed << endl;
    }
    return 0;
}

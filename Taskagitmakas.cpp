#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int oyuncu, bilgisayar;
    int oyuncuSkor = 0, bilgisayarSkor = 0, beraberlik = 0;
    char devam;

    cout << "Tas-Kagit-Makas Oyununa hosgeldin dostum!" << endl;

    do {
        cout << "\nSecenekler: " << endl;
        cout << "1 - Tas" << endl;
        cout << "2 - Kagit" << endl;
        cout << "3 - Makas" << endl;
        cout << "Secimini yap (1-3): ";
        cin >> oyuncu;

        if (oyuncu < 1 || oyuncu > 3) {
            cout << "(1-3) arasi bir sayi gir dedik mal mal hareket yapma!" << endl;
            continue; // yanlış giriş olursa bu turu atla
        }

        bilgisayar = rand() % 3 + 1;

        cout << "Bilgisayarin secimi: ";
        if (bilgisayar == 1) cout << "Tas" << endl;
        else if (bilgisayar == 2) cout << "Kagit" << endl;
        else cout << "Makas" << endl;

        if (oyuncu == bilgisayar) {
            cout << "Berabere!" << endl;
            beraberlik++;
        } else if ((oyuncu == 1 && bilgisayar == 3) || 
                   (oyuncu == 2 && bilgisayar == 1) || 
                   (oyuncu == 3 && bilgisayar == 2)) {
            cout << "Tebrikler, kazandin!" << endl;
            oyuncuSkor++;
        } else {
            cout << "Kaybettin!" << endl;
            bilgisayarSkor++;
        }

        cout << "\nSkor tablosu: " << endl;
        cout << "Oyuncu: " << oyuncuSkor 
             << " | Bilgisayar: " << bilgisayarSkor 
             << " | Beraberlik: " << beraberlik << endl;

        // 🧠 Burada hatalı seçim kontrolü yapıyoruz:
        do {
            cout << "Devam mi Tamam mi? (d/t): ";
            cin >> devam;

            if (devam != 'd' && devam != 'D' && devam != 't' && devam != 'T') {
                cout << " Hatali secim yaptiniz! Lutfen 'd' veya 't' girin." << endl;
            }
        } while (devam != 'd' && devam != 'D' && devam != 't' && devam != 'T');

    } while (devam == 'd' || devam == 'D');

    cout << "\n🎮 Oyun Bitti! Son Skor: " << endl;
    cout << "Oyuncu: " << oyuncuSkor 
         << " | Bilgisayar: " << bilgisayarSkor 
         << " | Beraberlik: " << beraberlik << endl;
         if (oyuncuSkor > bilgisayarSkor) {
            cout << "Helal kazandin!" << endl;
        } else if (bilgisayarSkor > oyuncuSkor) {
            cout << "Bilgisayar kazandi, loser!" << endl;
        } else {
            cout << "Beraberlik... " << endl;
        }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nece eded daxil edeceksiniz? N = ";
    cin >> N;

    if (N <= 0) {
        cout << "N musbet olmalidir!" << endl;
        return 0;
    }

    double eded, cem = 0, enBoyuk, enKicik;

    cout << "1-ci ededi daxil edin: ";
    cin >> eded;

    enBoyuk = enKicik = eded;
    cem += eded;

    for (int i = 2; i <= N; i++) {
        cout << i << "-ci ededi daxil edin: ";
        cin >> eded;

        cem += eded;

        if (eded > enBoyuk)
            enBoyuk = eded;

        if (eded < enKicik)
            enKicik = eded;
    }

    double orta = cem / N;

    cout << "\nEn boyuk eded: " << enBoyuk << endl;
    cout << "En kicik eded: " << enKicik << endl;
    cout << "Orta qiymet: " << orta << endl;

    return 0;
}

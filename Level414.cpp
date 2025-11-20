#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    int original = n;
    int reversed = 0;

    // Rəqəmləri tərsinə çeviririk
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << "Ededin tersi: " << reversed << endl;

    // Yoxlayırıq
    if (reversed == original)
        cout << "Eded tersi ile beraberdi (palindromdur)." << endl;
    else
        cout << "Eded tersi ile beraber deyil." << endl;

    return 0;
}

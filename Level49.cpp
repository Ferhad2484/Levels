#include <iostream>
using namespace std;

int main() {
    cout << "1-den 1000-e qeder palindrom ededler:\n";

    for (int n = 1; n <= 1000; n++) {
        int original = n;
        int reversed = 0;
        int temp = n;

        // Ədədi tərsinə çeviririk
        while (temp > 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        // Palindrom olub olmadığını yoxlayırıq
        if (original == reversed) {
            cout << original << " ";
        }
    }

    return 0;
}

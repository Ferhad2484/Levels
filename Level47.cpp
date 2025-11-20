#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Limit daxil edin: ";
    cin >> limit;

    cout << "Reqemlerinin kvadratlari cemi ozune beraber olan ededler:\n";

    for (int n = 1; n <= limit; n++) {
        int temp = n;
        int sum = 0;

        while (temp > 0) {
            int reqem = temp % 10;
            sum += reqem * reqem;   // rəqəmin kvadratı
            temp /= 10;
        }

        if (sum == n) {
            cout << n << " ";
        }
    }

    return 0;
}

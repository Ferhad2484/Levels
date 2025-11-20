#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    if (n == 0) {
        cout << "Ikilik formada: 0";
        return 0;
    }

    string binary = "";
    int temp = n;

    while (temp > 0) {
        int qaliq = temp % 2;
        binary = char(qaliq + '0') + binary;  // rəqəmi əvvələ əlavə et
        temp /= 2;
    }

    cout << "Ikilik formada: " << binary << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1;

    cout << "1000-den kicik Fibonacci ededleri:\n";

    while (a < 1000) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

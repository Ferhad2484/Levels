#include <iostream>
using namespace std;

int main() {
    double result;
    cout << "Ilkin ededi daxil edin: ";
    cin >> result;

    while (true) {
        char op;
        double value;

        cout << "Emeliyyat ve eded daxil edin (+ - * / =): ";
        cin >> op;

        if (op == '=') {
            cout << "Netice: " << result << endl;
            break;
        }

        cin >> value;

        switch (op) {
            case '+':
                result += value;
                break;
            case '-':
                result -= value;
                break;
            case '*':
                result *= value;
                break;
            case '/':
                if (value == 0) {
                    cout << "0-a bolmek olmaz!" << endl;
                } else {
                    result /= value;
                }
                break;
            default:
                cout << "Duzgun emeliyyat daxil edin!" << endl;
        }
    }

    return 0;
}

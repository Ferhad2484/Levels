#include <iostream>
using namespace std;

int main() {
    int n;
    int enBoyuk = INT32_MIN; // ən kiçik mümkün ədəd ilə başlayırıq

    cout << "Ardicil ededler daxil edin (dayandirmaq ucun 0 daxil edin):\n";

    while (true) {
        cin >> n;

        if (n == 0) {
            break; // döngünü bitir
        }

        if (n > enBoyuk) {
            enBoyuk = n; // ən böyük ədəd yenilənir
        }
    }

    if (enBoyuk == INT32_MIN) {
        cout << "Hele hec bir eded daxil edilmeyib." << endl;
    } else {
        cout << "En boyuk eded: " << enBoyuk << endl;
    }

    return 0;
}

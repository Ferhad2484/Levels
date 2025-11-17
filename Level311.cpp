#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {          // 1-dən 10-a qədər
        for (int j = 1; j <= 10; j++) {      // Hər biri üçün 1-dən 10-a qədər
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl; // Hər sətirdən sonra yeni sətrə keçmək
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    for(int x = 100; x <= 999; x++){
        int a = x / 100;        // yüzlüklər
        int b = (x / 10) % 10;  // onluqlar
        int c = x % 10;         // təkliklər

        if(a + b + c == 10){
            cout << x << " ";
        }
    }

    return 0;
}

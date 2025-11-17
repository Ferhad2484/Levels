#include <iostream>
using namespace std ;
int main(){
    int bal ;
    cout << "BALI Daxil edin : " ;
    cin >> bal ;
    if(bal >= 0 and bal <= 50){
        cout << "F" ;
    }
    else if(bal >= 51 and bal <= 60){
        cout << "E" ;
    }
    else if(bal >= 61 and bal <= 70){
        cout << "D" ;
    }
    else if(bal >= 71 and bal <= 80){
        cout << "C" ;
    }
    else if(bal >= 81 and bal <= 90){
        cout << "B" ;
    }
    else if(bal >= 91 and bal <= 100){
        cout << "A" ;
    }
    return 0 ;
}
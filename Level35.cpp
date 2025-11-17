#include <iostream>
using namespace std ;
int main(){
    int x ; int cem = 0 ; int n ;
    cout << "Eded daxil edin : " ;
    cin >> x ;
    while(x>0){
        n = x % 10 ;
        x = x / 10 ;
        cem = cem + n ;
    }
    cout << "Ededin reqemleri cemi : " << cem ;
}
#include <iostream>
using namespace std ;

int main(){
    int x ; int n = 0 ;
    cout << "Eded daxil edin : " ;
    cin >> x ;
    while(x > 0){
        x = x / 10 ;
        n ++ ;
    }
    cout << "Reqemlerin sayi : " << n ;
}
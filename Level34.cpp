#include <iostream>
using namespace std ;
int main(){
    int x ; int n = 1 ;
    cout << "Eded daxil edin :" ;
    cin >> x ;
    while(x>0){
        n = x*n ;
        x-- ;
    }
    cout << "Ededin faktoriali :" << n ;
}
#include <iostream>
using namespace std ;

int main(){
    int n = 0 ;
    for(int i = 100 ; i <= 999 ;i++){
        int a = i ;
        while(a>0){
           n = n + a % 10 ;
           a = a / 10 ;
        }
        if(n==10){
            cout << n << " ";
           }
    }
    return 0 ;
}
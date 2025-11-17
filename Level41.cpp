#include <iostream>
using namespace std ;

int main(){
    int x ; int cem = 0 ;
    cout << "Eded daxil edin : " ;
    cin >> x ;
    for(int i = 1 ; i <= x ;i++){
        if(i % 2 == 0){
            cem = cem + i*i ;
        }
    }
    cout << cem ;
}
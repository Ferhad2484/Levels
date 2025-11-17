#include <iostream>
using namespace std ;
int main(){
    int x ; int cem = 0 ;
    cout << "Eded daxil edin :" ;
    cin >> x ;
    for(int i = 2 ; i <= x ; i++){
        if(x % i == 0){
            cem++ ;
        }
    }
    if(cem > 1){
        cout << "Sade eded deyil  " ;
     }   
    else{
        cout << "Sade ededdir " ;
     }
}
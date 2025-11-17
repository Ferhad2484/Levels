#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Eded daxil edin : " ;
    cin >> n ;
   for(int j = 2 ; j < n ;j++){
    int cem = 0 ;
    
    for(int i = 2 ; i <= j / 2 ; i++){
        if(j % i == 0){
            cem++ ;
        }
    }
    if(cem == 0){
        cout << j << " ";
     }   
    }
}
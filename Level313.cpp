#include <iostream>
using namespace std ;
int main(){
    int x ; int y = 0 ;int n ;
    cout << "Eded daxil edin : " ;
    cin >> x ;
    while(x>0){
        n = x % 10 ;
        x = x / 10 ;
        y = 10*y + n ;
    }
    cout << "Ededin tersi : " << y << endl ;
    if(x == y){
        cout << "Eded Palindromdur" ;
    }
    else{
        cout << "Palindrom deyil" ;
    }
  return 0 ;
}
#include <iostream>
using namespace std ;
int main(){
    double x ;
    cout << "Eded daxil edin :" ;
    cin >> x ;
    if(x>0){
        cout << "Eded musbetdir" ;
    }
    else if(x<0){
        cout << "Eded menfidir " ;
    }
    else{
        cout << "Eded sifirdir" ;
    }
}
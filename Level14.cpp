#include <iostream>
#include <numbers> // C++20: pi sabiti ucun
using namespace std ;
int main(){
    double radius ;
    cout << "Radius daxil edin: " ;
    cin >> radius ;
    double sahe = numbers::pi*radius*radius ;
    double cevre = 2* numbers::pi *radius ;
    cout << "Sahesi: " << sahe << endl ;
    cout << "cevre: " << cevre << endl ; 
    return 0 ;
}
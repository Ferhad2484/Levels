#include <iostream>
using namespace std ;
int main(){
    int saniye ;
    cout << "Saniye daxil edin :" ;
    cin >> saniye ;
    int saat = saniye/3600 ;
    int qalansaniye = saniye % 3600;
    int deqiqe = qalansaniye % 60;
    cout << saniye << " saniye  = "<< deqiqe << "deqiqe" << endl ;
    cout << saniye << " saniye = " << saat << " saat" << endl ;
    return 0 ;
}
#include <iostream>
using namespace std;

int main(){
    int n, osszeg = 0;
    cout << "Meddig adjam ossze a szamokat? Add meg a szamot: ";
    cin >> n;
    while(n>0){
        osszeg = osszeg + n;
        n--;
    }
    cout << "A szamok osszege 1-tol a megadott ertekig: "<< osszeg << endl;
    return 0;
}
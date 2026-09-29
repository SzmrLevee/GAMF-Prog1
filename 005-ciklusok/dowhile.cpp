#include <iostream>
using namespace std;

int main(){
    int n, osszeg = 0;
    cout << "Meddig adjam ossze a szamokat? Add meg a szamot: ";
    cin >> n;

    do{
        osszeg += n;
        n=n-1;
    }while(n>0);
    cout << "A szamok osszeg 1-tol a megadott ertekig: " << osszeg << endl;
    return 0;
}
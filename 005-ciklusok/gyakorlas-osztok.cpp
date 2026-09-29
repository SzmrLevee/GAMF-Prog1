#include <iostream>
using namespace std;

int main(){
    int szam, osztok = 0;
    cout << "Kerek egy szamot: ";
    cin >> szam;
    for(int i = szam-1; i!=1; i--){
        if(szam%i==0){
            osztok += 1;
        }
    }
    cout << "A(z) " << szam << " osztoinak szama: " << osztok << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    /* 
    int eletkor;
    char nev[30];

    cin >> eletkor;
    //cin után pufferben maradhat az enter
    cin.getline(nev, 30);
    */

    int eletkor;
    char nev[30];

    cin >> eletkor;
    cin.ignore(); //ENTER eldobása
    cin.getline(nev, 30);

    return 0;
}
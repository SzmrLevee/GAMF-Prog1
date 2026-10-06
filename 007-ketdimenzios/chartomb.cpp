#include <iostream>
using namespace std;

int main(){
    char nev[25];
    cout << "Adja meg a teljes nevet ekezetek nelkul: ";
    cin.getline(nev,25);
    cout << "Az on neve: " << nev;
    cout << endl;
    return 0;
}
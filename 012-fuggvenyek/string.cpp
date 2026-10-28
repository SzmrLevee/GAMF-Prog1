#include <iostream>
#include <string>
using namespace std;
void kiir(string szo, int db);

int main(){
    string nev;
    cout << "Mit irjak ki: ";
    getline(cin, nev);
    int hanyszor;
    cout << "Hanyszor irja ki a kepernyore: ";
    cin >> hanyszor;
    kiir(nev, hanyszor);
    return 0;
}

void kiir(string szo, int db){
    for(int i=0;i<db;i++) cout << szo << endl;
}
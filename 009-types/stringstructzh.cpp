#include <iostream>
#include <string>
using namespace std;

struct hallgato{
    string nev;
    int jegy;
    int szulev;
};

int main(){
    int letszam;
    hallgato csop[15];
    do{
        cout << "Mennyi legyen a csoport letszama: ";
        cin >> letszam;
        cin.ignore();
    }while(letszam<1 || letszam >15);
    for(int i=0;i<letszam;i++){
        cout << "Adja meg a(z) "<<i+1<<". tanulo nevet: ";
        getline(cin, csop[i].nev);
        cout << "Adja meg a szul evet: ";
        cin >> csop[i].szulev;
        do{
            cout << "Adja meg a jegyet: ";
            cin>>csop[i].jegy;
            cin.ignore();
        }while(csop[i].jegy<1 || csop[i].jegy>5);
    }
    cout << "A hallgatoi adatok: "<<endl;;
    for(int i=0;i<letszam;i++){
        cout << csop[i].nev << "\t"<<csop[i].jegy << "\t"<<csop[i].szulev << "\t"<<endl;
    }
    return 0;
}
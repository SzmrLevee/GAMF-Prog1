#include <iostream>
#include <iomanip> // Megjelenítés manipulálás
using namespace std;

struct Tanulo{
    char nev[50];
    int jegy;
    int szulev;
};

int main(){
    Tanulo hallgato[10];
    int szam;
    float atlag;
    do{
        cout << "Mennyi hallgato van: ";
        cin >> szam;
        cin.ignore();
    } while(szam < 1 || szam > 10);

    for(int i=0;i<szam;i++){
        cout << "Adja meg a " << i+1 << ". hallgato nevet: ";
        cin.getline(hallgato[i].nev, 50);
        cout << "Adja meg a jegyet: ";
        cin >> hallgato[i].jegy;
        cout << "Adja meg a szuletesi evet: ";
        cin >> hallgato[i].szulev;
        cin.ignore();
    }

    system("clear"); // képernyőtörlés
    cout.setf(ios::left); // balra zárt kiírás a setw() fgv miatt

    cout << "Hallgatok adatai: \n";
    for(int i=0;i<szam;i++){
        cout << setw(50)<<hallgato[i].nev <<"\t"<<hallgato[i].jegy<<"\t"<<hallgato[i].szulev<<endl;
        atlag += hallgato[i].jegy;
    }

    cout << "\nA csoport atlaga: " << atlag/szam << ".\n"; 

    return 0;
}
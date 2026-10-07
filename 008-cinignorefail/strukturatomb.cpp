#include <iostream>
#include <iomanip> // Megjelenítés manipulálás
using namespace std;

int main(){
    // tetszőleges típusú adatok együttese
    struct dolgozo{
        char nev[25];
        int fiz;
    };

    dolgozo csop[5];
    int ossz = 0;

    for(int i=0;i<5;i++){
        cout << "Adja meg a " << i+1 << ". dolgozo nevet: ";
        cin.getline(csop[i].nev, 25);
        cout << "Adja meg a fizeteset: ";
        cin >> csop[i].fiz;
        cin.ignore();
    }

    system("clear"); // képernyőtörlés
    cout.setf(ios::left); // balra zárt kiírás a setw() fgv miatt

    cout << "Dolgozok adatai: \n";
    for(int i=0;i<5;i++){
        cout << setw(25)<<csop[i].nev <<"\t"<<csop[i].fiz<<" Ft"<<endl;
        ossz += csop[i].fiz;
    }
    cout << "\nA csoport osszfizetese: "<<ossz<<" Ft\n";

    return 0;
}
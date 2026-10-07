#include <iostream>
using namespace std;

struct test{
    char nev[25];
    int magas;
    float suly;
};

int main(){
    test gyerek;
    /*
    cout << "Adja meg a gyerek magassagat cm-ben: " << endl;
    cin >> gyerek.magas;
    cin.ignore(); // CSAK KARAKTERES BEVITEL ELŐTT FONTOS!
    */
    cout << "Adja meg a gyerek nevet: " << endl;
    cin.getline(gyerek.nev, 25);
    cout << "Adja meg a gyerek magassagat cm-ben: " << endl;
    cin >> gyerek.magas;
    cout << "Adja meg a gyerek sulyat kg-ban: " << endl;
    cin >> gyerek.suly;
    cout << "A gyerek adatai a kovetkezok: " << endl;
    cout << gyerek.nev <<" - "<<gyerek.magas<<"cm es "<<gyerek.suly<<"kg\n";
    return 0;
}
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char nev1[25],nev2[25]; //bet segedvaltozoval is lehet

    cout << "Adja meg egy teljes nevet ekezetek nelkul: ";
    cin.getline(nev1,25);

    strcpy(nev2, nev1);
    cout << "A nev: " << nev2 << endl;

    cout << "A neve hossza a szokozzel egyutt: " << strlen(nev1) <<endl;

    for(int i=0; i<strlen(nev2); i++){
        nev2[i] = tolower(nev2[i]);
        cout << nev2[i];
    }cout << endl;
    for(int i = 0; i<strlen(nev2); i++){
        cout << (char)toupper(nev2[i]); //cout << bet;
    }
    if(strcmp(nev1, nev2) == 0) cout << "\nEgyforma szovegek." <<endl;
    else cout << "\nNem egyformak.\n";
    return 0;
}
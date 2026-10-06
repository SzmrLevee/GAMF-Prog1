#include <iostream>
using namespace std;

int main(){
    int hom[4][7];

    cout << "Toltsd fel a homersekleteket!\n";
    for(int i=0; i<4; i++){
        cout << i+1 << ". het\n";
        for(int j=0; j<7; j++){
            cout << j+1 << ". nap: ";
            cin>>hom[i][j];
        }
    }

    //Kiírás

    float atlag = 0;
    cout << "\nHomersekletek:\n";
    for(int i=0; i<4; i++){
        cout << i+1 << ". het: ";
        for(int j=0; j<7; j++){
            cout << hom[i][j] << "\t";
            atlag += hom[i][j];
        }
        cout << endl;
    }
    cout << "\nAz atlaghomerseklet: " << atlag/28<<" fok.";
    return 0;
}
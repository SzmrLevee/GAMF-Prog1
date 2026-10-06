#include <iostream>
using namespace std;

int main(){
    int tmb[8]={1,2,2,2,3,2,2,1};
    char vmi[8]={'a','b','c','d','e','f','g','h'};
    int sajat[6];
    cout << "Add meg a tomb elemeit: ";
    for (int i=0; i<6;i++){
        cout << "Add meg a " << i+1 << ". számot: ";
        cin >> sajat[i];
    }


    cout << "Az elso tomb elemei: ";
    for (int i=0; i < 8; i++) cout <<tmb[i]<<", ";
    cout << "\nA masodik tomb elemei: ";
    for (int i=0; i < 8; i++) cout <<vmi[i]<<", ";
    cout << "\nA sajat tomb elemei: ";
    for (int i=0; i < 6; i++) cout <<sajat[i]<<", ";
    cout << endl;
    return 0;
}
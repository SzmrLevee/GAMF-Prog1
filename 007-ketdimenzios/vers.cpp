#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char vers[2][60];

    int i, j, szokoz = 0, ossz = 0;
    for(i=0; i<2;i++){
        cout << "Adja meg a vers " << i+1 << ". sorat: "<<endl;
        cin.getline(vers[i], 60);
    }cout << endl;
    for(i=0; i<2;i++){
        for(j=0;j<strlen(vers[i]); j++){
            if(vers[i][j] == ' ') szokoz++; //if (isspace(vers[i][j])) szokoz++;
            cout << (char)toupper(vers[i][j]);
        }
        ossz += strlen(vers[i]);
        cout << endl;
    }
    cout << "\nSzokozok szama: " << szokoz << ",\nA karakterek szama: " << ossz-szokoz << endl;;
    return 0;
}
#include <cctype>
#include <iostream>
using namespace std;

int main(){
    char k;
    int x,y,z;
    cout << "Adj meg egy tetszoleges karaktert: ";
    cin >> k;
    z = toupper(k);
    //x = isalpha(k);
    //y = isdigit(k);
    if(isalpha(k)!=0) cout << "A megadott karakter betu.\n";
    if(isalpha(k) != 0){
        if(k==z)
            cout << "A megadott karakter nagybetu" << endl;
        else cout << "A megadott karakter kisbetu" << endl;
    }
    else{
        if(isdigit(k) != 0) cout << "A megadott karakter szam.\n";
        else cout << "A megadott karakter nem betu es nem is szam.\n";
    }
    return 0;
}
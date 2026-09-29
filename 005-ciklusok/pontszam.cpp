#include <iostream>
using namespace std;

int main(){
    int pont;
    do{
        cout << "Adjon meg egy pontszamot (0-100)!" << endl;
        cin >> pont;
    }while(pont > 100 || pont < 0);
    if (pont < 51) cout << "Megbukott." << endl;
    else cout << "Megfelelt." << endl;
    return 0;
}
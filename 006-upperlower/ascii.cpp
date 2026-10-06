#include <iostream>
using namespace std;

int main(){
    unsigned char x;
    for(x=80; x <120; x++){
        cout << "Az ASCII kodja a \t" << (char)x << " \t karakternek " << (int)x << endl;
    }
    return 0;
}
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string sor;
    ifstream myfile("proba01.txt"); // nem szükséges, hogy legyen fájl!
    if(myfile.is_open()){
        while(myfile.good()){
            getline(myfile,sor);
            cout << sor << endl;
        }
        myfile.close();
    }
    else cout << "A file megnyitasa sikertelen volt.";
    return 0;
}
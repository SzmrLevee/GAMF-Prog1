#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream myfile("proba01.txt"); // nem szükséges, hogy legyen fájl!
    if(myfile.is_open()){
        myfile << "Ez egy sor\n";
        myfile << "Ez meg egy ujabb sor\n";
        myfile.close();
        cout << "A file megirasa befejezodott!"<<endl;
    }else cout << "A file megirasa sikertelen volt."<<endl;
    return 0;
}
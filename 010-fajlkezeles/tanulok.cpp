#include <fstream>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct tanulok{
    string nev;
    int magas;
};

int main(){
    srand(time(NULL));
    tanulok tomb[4];
    for (int i=0; i<4; i++){
        cout << "Adja meg a(z) "<<i+1<< " tanulo nevet: ";
        getline(cin, tomb[i].nev);
        tomb[i].magas=rand()%71+140;
    }

    ofstream myfile("tanulok.txt");
    if(!myfile.is_open()){
        cout << "A fajl nem nyithato meg!"<<endl;
        return 1;
    }else{
        for(int i=0; i<4; i++){
            myfile << tomb[i].nev <<";"<< tomb[i].magas <<endl;
        }
        myfile.close();
        cout << "A file megirasa befejezodott!"<<endl;
    }

    system("clear");

    ifstream vissza("tanulok.txt");
    for(int i=0; i<4;i++){
        getline(vissza, tomb[i].nev, ';');
        vissza >> tomb[i].magas;
        //vissza.ignore();  --> substr helyett
        cout << tomb[i].nev.substr(1, tomb[i].nev.length()-1)<<" - "<<tomb[i].magas<<" cm magas."<<endl;
    }
    vissza.close();
    cout << endl;
    return 0;
}
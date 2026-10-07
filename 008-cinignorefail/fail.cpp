#include <iostream>
using namespace std;

int main(){
    if(cin.fail()){
        cout << "Hibas adat" << endl;
        cin.clear(); // Hibás állapotot törli - puffert törli + alapértelmezett érték
        // vagy
        cin.ignore(1000, '\n'); // ignore paraméterekkel
    }

    return 0;
}
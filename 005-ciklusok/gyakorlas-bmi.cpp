#include <iostream>
using namespace std;

int main(){
    int tomeg;
    float magassag;
    cout << "Adja meg a tomeget (kg): ";
    cin >> tomeg;
    cout << "Adja meg a magassagot (cm): ";
    cin >> magassag;
    cout << "A BMI (testtömeg indexe) - BMI=tomeg(kg)/magassag(m)negyzet: " << tomeg/((magassag/10/10)*(magassag/10/10)) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    char x;
    cout << "Melyik specialis karakterre gondoltam?";
    cin >> x;
    while(x!='@'){
        cout << "Sajnos nem jo. Tippelj egy masikat: ";
        cin >> x;
    }
    cout << "Gratulalok! Tényleg a @ karakterre gondoltam. " << endl;
    return 0;
}
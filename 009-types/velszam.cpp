#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int kocka[8], TAR[6] = {0}, i, dbparos=0;
    cout<<"A dobasok a kovetkezok: ";
    for (i=0; i<8;i++){
        kocka[i]=rand() % 6 + 1;
        cout << kocka[i] << ", ";
        if(kocka[i] % 2 == 0) dbparos++;
        switch (kocka[i]) {
            case 1:TAR[0]++; break;
            case 2:TAR[1]++; break;
            case 3:TAR[2]++; break;
            case 4:TAR[3]++; break;
            case 5:TAR[4]++; break;
            case 6:TAR[5]++; break;
        }
    } 
    cout <<endl;
    for(i=0;i<6;i++){
        cout<<"A(z) "<<i+1<<"-es dobasok szama:\t"<<TAR[i]<<endl;
    }
    cout<<"A paros dobasok: "<<dbparos<<endl;
    return 0;
}
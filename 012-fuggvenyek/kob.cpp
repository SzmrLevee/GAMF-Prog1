#include <iostream>

using namespace std;

int kob(int x); // Ha a main függvény előtt csinálom, akkor nincs szükség erre a deklarációra

/*
int kob(int x){
    return x*x*x;
}
*/

int main(){
    int szam;
    cout <<"Adjon meg egy szamot: ";
    cin>>szam;
    cout << "A szam kobe: "<<kob(szam)<<endl;
    return 0;
}

int kob(int x){
    return x*x*x;
}
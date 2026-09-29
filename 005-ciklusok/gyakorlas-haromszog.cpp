#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Add meg az (a) oldalt: ";
    cin >> a;
    cout << "Add meg a (b) oldalt: ";
    cin >> b;
    cout << "Add meg a (c) oldalt: ";
    cin >> c;
    if(a+b>c && a+c>b && b+c>a){
        cout << "A(z) " << a << ", " << b << ", " << c << " alkothatnak egy haromszoget!";
    }else{
        cout << "A(z) " << a << ", " << b << ", " << c << " nem alkothatnak egy haromszoget!";
    }
    return 0;
}
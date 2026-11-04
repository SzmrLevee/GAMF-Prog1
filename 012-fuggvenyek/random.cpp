#include <iostream>
#include <ctime>

using namespace std;

float Average(int *array, int count){
    int sum = 0;
    for(int i=0;i<count;i++){
        sum+=array[i];
    }
    return (float)sum / count;
}

int main(){
    int a[1000];
    int length = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<length;i++){
        a[i]=rand() % 10;
    }
    /*
    int sum = 0;
    for(int i=0; i<10;i++){
        sum+=a[i];
    }
    cout << "Átlag: " <<(float)sum/10<<endl; //ha nem egész átlagot akarunk, akkor vagy 10.0, vagy float(sum)
    */
    cout << Average(a, length) << endl;
    return 0;
}
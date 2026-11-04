
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct City {
    string CityName;
    int Distance;
    int Contracts;
};

int ReadFile(string Filename, City* cities, int length = 20) {
    ifstream InFile(Filename);

    if (!InFile.is_open()) {
        cout << "Sikertelen file beolvasas." << endl;
        exit(1);
    }

    int line = 0;

    while (line < length &&
           InFile >> cities[line].CityName
                  >> cities[line].Distance
                  >> cities[line].Contracts) {
        line++;
    }

    InFile.close();
    return line;
}

void PrintData(City* cities, int length = 20) {
    cout << "Varos\tTav\tSzerzodes" << endl;
    cout << "---------------------" << endl;

    for (int i = 0; i < length; i++) {
        cout << cities[i].CityName << "\t"
             << cities[i].Distance << "\t"
             << cities[i].Contracts << endl;
    }

    cout << endl;
}

int GetTraveledDistance(City* cities, int length = 20){
    int sum = 0;
    for(int i=0; i<length; i++){
        sum += cities[i].Distance;
    }
    return sum * 2;
}

City FarestCity(City* cities, int length=20){
    int fc_index = 0;
    for(int i=1;i<length;i++){
        if(cities[fc_index].Distance<cities[i].Distance){
            fc_index=i;
        }
    }
    return cities[fc_index];
}

int main() {
    City* cities = new City[20];

    int count = ReadFile("cities.txt", cities);
    PrintData(cities, count);

    cout << "Az ugynok " 
    << GetTraveledDistance(cities, count)
    << " km-t utazott."<<endl;

    cout << "A legtavolabbi varos: "
    << FarestCity(cities, count).CityName<<endl;

    delete[] cities;

    return 0;
}

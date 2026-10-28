
#include <cstdlib>
#include <iostream>

using namespace std;

double fakt(int);

int main() {
    int szam;

    cout << "Adjon meg egy szamot: ";
    cin >> szam;

    if (szam < 0) {
        cout << "Negativ szamnak nincs faktorialisa!" << endl;
    } else {
        cout << "A szam faktorialisa: " << fakt(szam) << endl;
    }

    return EXIT_SUCCESS; //return 0;
}

double fakt(int n) {
    double f = 1;

    for (int i = 2; i <= n; i++) {
        f *= i;
    }

    return f;
}

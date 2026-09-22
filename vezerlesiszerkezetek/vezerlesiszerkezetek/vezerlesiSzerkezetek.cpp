#include <iostream>
using namespace std;

int main() {
	/*
	float a;
	cout << "Adjon meg egy szamot!: ";
	cin >> a;
	// if (a > 0) cout << "Pozitiv!" << endl;
	if (a > 0) {
		cout << "Pozitiv!" << endl;
	}
	else {
		if (a < 0) {
			cout << "Negativ!" << endl;
		}
		else {
			cout << "0!" << endl;
		}
	}
	*/
	
	/*
	int a;
	cout << "Adjon meg egy szamot!: ";
	cin >> a;
	if (a % 2 == 0) {
		cout << "Paros!" << endl;
	}
	else {
		cout << "Paratlan!" << endl;

	}
	*/

	/*
	int a;
	cout << "Adjon meg egy pontszamot!: ";
	cin >> a;
	if (a < 0 || a>100) cout << "Nem megfelelo pontszam!" << endl;
	else {
		if (a < 50) {
			cout << "Elegtelen!" << endl;
		}
		else {
			if (a < 61) {
				cout << "Elegseges!" << endl;
			}
			else {
				if (a < 76) {
					cout << "Kozepes!" << endl;
				}
				else {
					if (a < 86) {
						cout << "Jo!" << endl;
					}
					else {
						cout << "Jeles!" << endl;
					}
				}
			}
		}
	}
	*/

	/*
	int x, y;
	cout << "Adjon meg egy szamot!: ";
	cin >> x;
	cout << "Adjon meg egy osztot!: ";
	cin >> y;

	if (y == 0) {
		cout << "Nullaval nem lehet osztani\n";
	}
	else {
		if (x % y == 0) {
			cout << "Oszthato a ket szam!";
		}
		else {
			cout << "Nem oszthato a ket szam!";
		}
	}
	*/

	/*
	int a;
	cout << "Adjon megy egy osztalyzatot!: ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "Egyes";
		break;
	case 2:
		cout << "Kettes";
		break;
	case 3:
		cout << "Harmas";
		break;
	case 4:
		cout << "Negyes";
		break;
	case 5:
		cout << "Otos";
		break;
	default:
		cout << "Ez nem egy erdemjegy!";
	}
	*/

	int a;
	cout << "Adjon megy egy szamot!: ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "1. Uj feladat\n";
	case 2:
		cout << "2. Eredmenyek\n";
	case 3:
		cout << "0. Kilepes";
	}


	return 0;
}
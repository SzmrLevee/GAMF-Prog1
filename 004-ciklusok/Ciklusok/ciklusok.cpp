#include <iostream>
using namespace std;

int main() {
	/*
	int a;
	cout << "Kerek egy szamot: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cout << i << endl;
	}
	*/

	/*
	int a;
	cout << "Kerek egy szamot: ";
	cin >> a;
	for (int i = a; i > 0; i--) {
		cout << i << endl;
	}
	*/

	/*
	int a;
	cout << "Kerek egy szamot: ";
	cin >> a;
	for (int i = 0; i <= a; i=i+2) {
		cout << i << endl;
	}
	*/

	//masik megoldas:

	/*
	int a;
	cout << "Kerek egy szamot: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
	*/

	/*
	int a, ossz=0;
	cout << "Kerek egy szamot: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		ossz += i; // ossz = ossz + 1
	}
	cout << "A szamok osszege: " << ossz << endl;
	*/

	/*
	int a, faktorialis = 1;
	cout << "Kerek egy szamot: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		faktorialis *= i;
	}
	cout << "A szam faktorialisa: " << faktorialis << endl;
	*/

	/*
	int a, b;
	cout << "Kerek egy a szamot: ";
	cin >> a;
	cout << "Kerek egy b szamot: ";
	cin >> b;
	if (a > b) {
		cout << "A(z) " << a << " nagyobb mint a(z) " << b << endl;
	}
	else {
		if (b > a) {
			cout << "A(z) " << b << " nagyobb mint a(z) " << a << endl;
		}
		else {
			cout << "A ket szam egyenlo";
		}
	}
	*/

	/*
	int a;
	cout << "Kerek egy szamot: ";
	cin >> a;
	if (a>=-10 && a <= 10) {
		cout << "A [-10,10] koze esik" << endl;
	}
	else {
		cout << "Nem a [-10,10] koze esik" << endl;
	}

	switch (a >= -10 && a <= 10) {
	case 1:
		cout << "A [-10,10] koze esik" << endl;
		break;
	case 0:
		cout << "Nem a [-10,10] koze esik" << endl;
		break;
	}
	*/

	int nap;
	cout << "Kerek egy szamot (1-7): ";
	cin >> nap;

	switch (nap) {
	case 1:
		cout << "Hetfo\n";
		break;
	case 2:
		cout << "Kedd\n";
		break;
	case 3:
		cout << "Szerda\n";
		break;
	case 4:
		cout << "Csutortok\n";
		break;
	case 5:
		cout << "Pentek\n";
		break;
	case 6:
		cout << "Szombat\n";
		break;
	case 7:
		cout << "Vasarnap\n";
		break;
	}

	return 0;
}
#include <iostream> // iostream modul, bemeneti kimeneti
using namespace std; // standart névtér 

int main() { // belépési pont
	setlocale(LC_ALL, "Hungarian");
	/*
	int hossz = 15;
	cout << "A negyzet (a) oldala: " << hossz << " cm\n" << "A negyzet kerulete: " << 4 * hossz << " cm" << endl;
	*/

	/*
	int a = 8, b = 4;
	cout << "a + b: " << a + b << endl; // 12
	cout << "a - b: " << a - b << endl; // 4
	cout << "a * b: " << a * b << endl; // 32
 	cout << "a / b: " << a / b << endl; // 2
	cout << "a % b: " << a % b << endl; // 0
	*/

	/*
	// típuskonverzió
	int r = 15;
	float k, t;
	k = 2 * r * 3.14;
	t = r * r * 3.14;
	cout << "Az " << r << " cm sugaru kor kerulete: " << k << " cm, terulete pedig: " << t << " cm2" << endl;
	*/


	/*
	int i;
	char betu = "z";
	i = betu;
	cout << "A betu szamkent: " << i << ", karakterkent: " << betu << endl;
	*/


	/*
	int r = 8;
	cout << "A kor kerulete: " << 2 * r * 3.14 << ", a terulete pedig: " << int(r * r * 3.14) << endl;
	*/

	// Beolvasó utasítás

	/*
	int r;
	cout << "Adja meg a kor sugarat!" << endl;
	cin >> r;
	cout << "A(z) r: " << r << endl;
	float x, y;
	cout << "Adjon meg 2 tort szamot: " << endl;
	cin >> x >> y;
	cout << "A(z) x: " << x << endl;
	cout << "A(z) y: " << y << endl;
	*/

	/*
	int a, b;
	cout << "Adja meg a téglalap oldalainak hosszat:  \n";
	cin >> a >> b;
	cout << "A teglalap kerulete: " << 2 * (a + b) << " cm" << endl;
	cout << "A teglalap terulete: " << a * b << " cm2" << endl;
	*/

	int ido, ora, perc, mp;
	cout << "Adja meg az idot masodpercben: ";
	cin >> ido;
	ora = ido / 3600;
	mp = ido % 3600;
	perc = mp / 60;
	mp = mp % 60;
	cout << "A megadott ido ";
	cout << ora << " ora, " << perc << " perc es " << mp << " masodperc";
	return 0;
}
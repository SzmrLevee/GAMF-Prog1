#include <iostream>
#include <string>

using namespace std;

int main() {
	//Deklarálása -> [TÍPUS]* [NEVE] muszáj a csillag, ettől lesz mutató

	/*int count = 10, x;
	int* int_ptr;
	int_ptr = &count;
	x = int_ptr;*/

	int f = 10;
	int* mut; //intre mutató mutató típusú változó létrehozása
	int& fi = f; //hivatkozási típusú változó
	mut = &f; //mut pointer is az fre mutat
	cout << "f= " << f << " fi= " << fi << " *mut= " << *mut << endl;
	fi = 20;
	cout << "f= " << f << " fi= " << fi << " *mut= " << *mut << endl;
	cout << &f << " " << &fi << " " << mut << " " << &mut << endl;


	return 0;
}
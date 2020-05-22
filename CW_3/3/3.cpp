#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int a, b, c;
	cout << "x = "; cin >> a;
	cout << "y = "; cin >> b;
	cout << "r = "; cin >> c;
	try {
		if (c < 0) { throw 99; }
		circle mycircle(a, b, c);
		cout << "Square: " << mycircle.sq() << endl;
	}
	catch(int a) {
		cout << "Error: Radius must be positive! " << endl;
	}
	system("pause");
	return 0;
}

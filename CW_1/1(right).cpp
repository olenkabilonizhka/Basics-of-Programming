#include <iostream>
using namespace std;

int main() {
	int ch, a, b, c, temp;
	cout << "ch="; cin >> ch;
	a = ch / 100; b = (ch % 100) / 10; c = ch % 10;
	if (a == b && b == c)
		cout << ch;
	else if (a == b) {
		if (b > c)
			cout << ch;
		else { c = b; b = a; cout << a * 100 + b * 10 + c; }
	}
	else if (b == c) {
		if (a > b)
			cout << ch;
		else { c = a; a = b; cout << a * 100 + b * 10 + c; }
	}
	else if (a == c) {
		if (a < b)
			cout << ch;
		else { c = b; b = a; cout << a * 100 + b * 10 + c; }
	}
	else if (b > c) {
		if (a > b || a>c)
			cout << ch;
		else if (a<c) { temp = c; c = a; a = temp; cout << a * 100 + b * 10 + c; }
	}
	else if (b < c) {
		if (a < b) { temp = c; c = a; a= temp; cout << a * 100 + b * 10 + c;}
		else if (a<c) { temp = c; c = b; b = temp; cout << a * 100 + b * 10 + c; }
		else { temp = c; c = a; a = temp;  cout << a * 100 + b * 10 + c;}
	}
	return 0;
}

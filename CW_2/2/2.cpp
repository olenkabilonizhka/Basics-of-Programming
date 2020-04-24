#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;
	int** arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int sv = 0, sn = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < i)
				sn += arr[i][j];
			else if (j > i)
				sv += arr[i][j];
		}
	}
	if (sv > sn) {cout << "The sum of the upper triangle is larger.";}
	else if (sv == sn) { cout << "Sums are equal."; }
	else { cout << "The sum of the lower triangle is larger."; }
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	system("pause");
	return 0;
}
/*
1)Input: n=4;
1 8  3 2
8 0  9 15
3 11 9 6
5 2  1 4
Output:
The sum of the upper triangle is larger.
2)Input: n=5;
3  -2 -9  4  -5
7  6  -9  11  5
0  7  14  -15 2
2  -8 7   -7  12
-3 -5 -13 0   8
Output:
Sums are equal.
3)Input: n=3;
1 2 3
4 5 6
7 8 9
Output:
The sum of the lower triangle is larger.
*/

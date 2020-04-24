#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const int n = 100;
	char str[n];
	cin.get(str, n, '.');
	int r = 0;
	char str2[n]{};
	for (int i = strlen(str); i >= 0; i--) {
		if (str[i] == ' ') {
			char temp[n]{};
			for (int j = 0; j < r; j++) {
				temp[j] = str[i+1+j];
			}
			temp[r-1] = ' ';
			strcat(str2, temp);
			r = 1;
		}
		else {
			if (i == 0) {
				char temp[n]{};
				for (int j = 0; j < r; j++) {
					temp[j] = str[i + j];
				}
				temp[r] = '.';
				temp[r+1] = '\0';
				strcat(str2, temp);
			}
			r++ ;
		}
	}
	cout << str2 << endl;
	system("pause");
	return 0;
}
/*
1)Input: she is Ella.
Output: Ella is she.
2)Input: would you be my little quarantine.
Output: quarantine little my be you would.
3)Input: there are beautiful cakes.
Output: beautiful cakes are there.
*/

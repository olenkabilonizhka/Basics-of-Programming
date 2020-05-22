#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;

int main() {
	int k1 = 0, k2 = 0, r = 0; ifstream fin1("in1.txt");      
	person* book = new person[10];
	if (fin1.is_open()) {
		while (!fin1.eof()) {
			fin1 >> book[k1].name;
			fin1 >> book[k1].surname;
			k1++;
		}
	}
	else { cout << "Don't open!" << endl; }
	fin1.close();
	ifstream fin2("in2.txt");    
	person* book2 = new person[10];
	if (fin2.is_open()) {
		while (!fin2.eof()) {
			fin2 >> book2[k2].name;
			fin2 >> book2[k2].surname;
			k2++;
		}
	}
	else { cout << "Don't open!" << endl; }
	fin2.close(); 
	person* outbook = new person[20];
	Write(outbook, book, book2, k1, k2,r);
	Write(outbook, book2, book, k2, k1,r);
	ofstream fout("out.txt", ios_base::out);       
	for (int i = 0; i < r; i++) {
		fout << outbook[i].name<<" " << outbook[i].surname << "\n";
	}
	fout.close();
	cout << "Done!" << endl;
	delete[] book; delete[] book2; delete[] outbook;
	system("pause");
	return 0;
}

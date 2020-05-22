#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef  Header_h
#define  Header_h

struct person {
	string name;
	string surname;
	bool operator== (const person &other) {
		if (this->name == other.name && this->surname == other.surname) { return true; }
		else { return false; }
	}
};

void Write(person* &outbook, person* &book, person* &book2, int k1, int k2,int &r) {
	for (int i = 0; i < k1; i++) {
		int ch = 0;
		for (int j = 0; j < k2; j++) {
			if (book[i].operator==(book2[j])) { ch++; break; }
		}
		if (ch == 0) { outbook[r].name = book[i].name; outbook[r].surname = book[i].surname; r++; }
	}
}

#endif 


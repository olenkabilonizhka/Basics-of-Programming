#pragma once
#include <iostream>
using namespace std;
#ifndef  Header_h
#define  Header_h

struct circle {
	int x; int y;
	int R;
	circle(int x, int y, int R) {
		this->x = x; this->y = y; this->R = R;
	}
	float sq() {
		return R*R*3.14;
	}
};

#endif 


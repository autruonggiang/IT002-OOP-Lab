#pragma once

#include <iostream>
#include <math.h>

using namespace std;

class DaThuc
{

	int bac;
	int* heSo;
	int x;

public:

	void setBac(int bac) { this->bac = bac; }
	void setHeSo(int num) { this->heSo = new int[num]; }

	int* getHeSo() { return this->heSo; }
	int getBac() { return this->bac; }

	void createDT(int a) {
		bac = 0;
		heSo = new int[1];
		heSo[0] = a;
	}

	void Input();

	void Output();

	int calcDT(int);

	DaThuc sumDT(DaThuc);

	DaThuc subDT(DaThuc);
};

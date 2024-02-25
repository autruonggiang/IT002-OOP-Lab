#pragma once

#include "PhanSo.h"

class DSPhanSo
{
	PS* arrPS;
	int size = 0;

public:

	void Input();

	void Output();

	float sum();
	PS findMax();
	PS findMin();

	void swap(PS&, PS&);
	void sort(bool);

};

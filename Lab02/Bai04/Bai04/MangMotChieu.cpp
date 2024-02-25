#include "MangMotChieu.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void MangMotChieu::createArr() {
	
	srand(time(NULL));
	
	this->size = rand() % 100 + 1;

	arrInt = new int[this->size];

	for (int i = 0; i < this->size; ++i) {
		this->arrInt[i] = rand() % 100;
	}

}

void MangMotChieu::Output() {
	for (int i = 0; i < size; ++i) {
		cout << this->arrInt[i] << " ";
	}

	cout << endl;
}

int MangMotChieu::countX(int X) {

	int count = 0;

	for (int i = 0; i < size; ++i) {
		if (arrInt[i] == X) {
			count++;
		}
	}

	return count;
}

bool MangMotChieu::checkIncrease() {

	for (int i = 0; i < size - 1; ++i) {
		if (arrInt[i + 1] < arrInt[i]) {
			return false;
		}
	}

	return true;

}

int MangMotChieu::findMinEven() {
	int min = NULL;

	for (int i = 0; i < size; ++i) {
		if (arrInt[i] % 2 == 1) {
			if ((min == NULL) || (min > arrInt[i]))
				min = arrInt[i];
		}
	}

	return min;
}

bool MangMotChieu::checkSNT(int X) {

	for (int i = 2; i < X; ++i) {
		if (X % i == 0)
			return false;
	}

	return true;
}

int MangMotChieu::findMaxElement() {
	int max = NULL;

	for (int i = 0; i < size; ++i) {
		if (checkSNT(arrInt[i])) {
			if ((max == NULL) || (max < arrInt[i]))
				max = arrInt[i];
		}
	}

	return max;
}
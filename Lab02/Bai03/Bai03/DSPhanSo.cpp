#include "DSPhanSo.h"

#include <iostream>

using namespace std;

void DSPhanSo::Input() {
	cout << "Nhap so luong phan so: ";
	cin >> size;

	arrPS = new PS[size];

	for (int i = 0; i < size; ++i) {
		cout << "\nPhan so " << i + 1 << endl;
		arrPS[i].Input();
	}
}

void DSPhanSo::Output() {
	for (int i = 0; i < size; ++i) {
		cout << "\nPhan so " << i + 1 << endl;
		arrPS[i].Output();
		cout << endl;
	}
}

float DSPhanSo::sum() {
	float sum = 0;

	for (int i = 0; i < sum; ++i) {
		sum += arrPS[i].getTu() * 1.0 / arrPS[i].getMau();
	}

	return sum;
}

PS DSPhanSo::findMax() {
	PS maxPS = arrPS[0];

	for (int i = 1; i < size; ++i) {
		if (maxPS < arrPS[i])
			maxPS = arrPS[i];
	}

	return maxPS;
}

PS DSPhanSo::findMin() {
	PS minPS = arrPS[0];

	for (int i = 1; i < size; ++i) {
		if (minPS > arrPS[i])
			minPS = arrPS[i];
	}

	return minPS;
}

void DSPhanSo::swap(PS& P1, PS& P2) {
	long long int tu = P1.getTu();
	long long int mau = P1.getMau();

	P1.setTu(P2.getTu());
	P1.setMau(P2.getMau());

	P2.setTu(tu);
	P2.setMau(mau);
}

void DSPhanSo::sort(bool increase) {

	bool run = false;

	for (int i = 0; i < size - 1; ++i) {
		if (increase) {
			if (arrPS[i] > arrPS[i + 1]) {
				swap(arrPS[i], arrPS[i + 1]);
				run = true;
			}
		}
		else {
			if (arrPS[i] < arrPS[i + 1]) {
				swap(arrPS[i], arrPS[i + 1]);
				run = true;
			}
		}
	}

	if (run)
		this->sort(increase);

}
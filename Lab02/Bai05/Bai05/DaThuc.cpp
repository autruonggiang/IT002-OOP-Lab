#include "DaThuc.h"

void DaThuc::Input() {

	cout << "Bac cua da thuc: ";
	cin >> this->bac;

	heSo = new int[bac + 1];
	for (int i = 0; i <= bac; ++i) {
		cout << "He so cua bac " << i << " : ";
		cin >> heSo[i];
	}
}

void DaThuc::Output() {

	int num;

	for (int i = this->bac; i >= 0; --i) {
		if (this->heSo[i] != 0) {
			if (this->heSo[i] >= 0) {
				num = this->heSo[i];
			}
			else {
				num = -1 * this->heSo[i];
			}

			if (i == 0) {
				cout << num << endl;
			}
			else {
				if (num != 1) {
					if (i == 1) {
						cout << num << "x";
					}
					else {
						cout << num << "x^" << i;
					}
				}
				else {
					if (i == 1) {
						cout << "x";
					}
					else {
						cout << "x^" << i;
					}
				}
			}

			if (i != 0) {
				if (this->heSo[i] >= 0) {
					cout << " + ";
				}
				else {
					cout << " - ";
				}
			}
		}
	}
}


int DaThuc::calcDT(int num) {
	int sum = 0;

	for (int i = bac; i >= 0; --i) {
		sum += pow(num, i) * heSo[i];
	}

	return sum;
}


DaThuc DaThuc::sumDT(DaThuc b) {
	int num = (bac > b.getBac()) ? bac : b.getBac();

	DaThuc c;

	c.setBac(num);
	c.setHeSo(num + 1);

	for (int i = num; i >= 0; --i) {
		if (i <= bac && i <= b.getBac())
			c.getHeSo()[i] = heSo[i] + b.getHeSo()[i];
		else if (i > bac)
			c.getHeSo()[i] = b.getHeSo()[i];
		else
			c.getHeSo()[i] = heSo[i];
	}

	return c;
}


DaThuc DaThuc::subDT(DaThuc b) {
	int num = (bac > b.getBac()) ? bac : b.getBac();

	DaThuc c;

	c.setBac(num);
	c.setHeSo(num + 1);

	for (int i = num; i >= 0; --i) {
		if (i <= bac && i <= b.getBac())
			c.getHeSo()[i] = heSo[i] - b.getHeSo()[i];
		else if (i > bac)
			c.getHeSo()[i] = -1 * b.getHeSo()[i];
		else
			c.getHeSo()[i] = -1 * heSo[i];
	}

	return c;
}
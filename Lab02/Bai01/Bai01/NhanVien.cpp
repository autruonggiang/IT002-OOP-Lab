#include "Employee.h"
#include <iostream>

using namespace std;

void Employee::setPer() {
	if (dayWork < 365) {
		permission = "Nhan vien";
	}
	else if (dayWork < 730) {
		permission = "Quan ly";
	}
	else if (dayWork < 1460) {
		permission = "Truong phong";
	}
	else {
		permission = "Truong ban quan ly";
	}
}

void Employee::setRate() {
	if (permission == "Nhan vien") {
		rate = 1;
	}
	else if (permission == "Quan ly") {
		rate = 1.5;
	}
	else if (permission == "Truong phong") {
		rate = 2.25;
	}
	else {
		rate = 4;
	}
}

void Employee::input() {
	fflush(stdin);

	cout << "Nhap ho va ten: ";
	getline(cin, name);

	cout << "Nhap so ngay lam viec: ";
	cin >> dayWork;

	this->setCode();
	this->setPer();
	this->setRate();
}

void const Employee::output() {
	cout << "Ho va ten: " << name << endl;
	cout << "So ngay lam viec: " << dayWork << endl;
	cout << "Ma nhan vien: " << code << endl;
	cout << "Chuc danh: " << permission << endl;
	cout << "He so luong: " << rate << endl;
}
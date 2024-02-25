#pragma once
#include<iostream>
using namespace std;

class PhanSo
{
private:
	int* tuso;
	int* mauso;
public:
	PhanSo();
	//  ~PhanSo();
	PhanSo(int, int);

	PhanSo RutGon();

	PhanSo& operator=(const PhanSo&);
	PhanSo& operator+=(const PhanSo&);
	PhanSo& operator-=(const PhanSo&);
	PhanSo& operator*=(const PhanSo&);
	PhanSo& operator/=(const PhanSo&);

	PhanSo& operator++();
	PhanSo operator++(int);
	PhanSo& operator--();
	PhanSo operator--(int);



	friend istream& operator>>(istream&, PhanSo&);
	friend ostream& operator<<(ostream&, PhanSo);

	friend PhanSo operator+(const PhanSo PS1, const PhanSo PS2);
	friend PhanSo operator-(const PhanSo PS1, const PhanSo PS2);
	friend PhanSo operator*(const PhanSo PS1, const PhanSo PS2);
	friend PhanSo operator/(const PhanSo PS1, const PhanSo PS2);

	friend bool operator==(const PhanSo PS1, const PhanSo PS2);
	friend bool operator!=(const PhanSo PS1, const PhanSo PS2);
	friend bool operator>(const PhanSo PS1, const PhanSo PS2);
	friend bool operator<(const PhanSo PS1, const PhanSo PS2);
	friend bool operator>=(const PhanSo PS1, const PhanSo PS2);
	friend bool operator<=(const PhanSo PS1, const PhanSo PS2);


};
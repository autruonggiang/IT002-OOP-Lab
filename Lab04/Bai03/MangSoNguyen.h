#pragma once
#include<iostream>
using namespace std;

class MangSoNguyen
{
	int* dulieu;
	int kichthuoc;
public:
	MangSoNguyen();
	MangSoNguyen(int);
	~MangSoNguyen();

	MangSoNguyen& operator=(const MangSoNguyen&);
	MangSoNguyen& operator++();
	MangSoNguyen operator++(int);

	int& operator[](int i) { return dulieu[i]; };

	friend MangSoNguyen operator+(const MangSoNguyen, const MangSoNguyen);
	friend ostream& operator<<(ostream&, MangSoNguyen);
	friend istream& operator>>(istream&, MangSoNguyen&);


};
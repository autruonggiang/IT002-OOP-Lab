#pragma once
#include<iostream>
using namespace std;

class SoPhuc
{
	float Thuc, Ao;
public:
	SoPhuc();
	SoPhuc(float, float);
	~SoPhuc() {};

	SoPhuc& operator=(const SoPhuc&);

	friend istream& operator>>(istream&, SoPhuc&);
	friend ostream& operator<<(ostream&, SoPhuc);

	friend SoPhuc operator+(const SoPhuc SP1, const SoPhuc SP2);
	friend SoPhuc operator-(const SoPhuc SP1, const SoPhuc SP2);
	friend SoPhuc operator*(const SoPhuc SP1, const SoPhuc SP2);
	friend SoPhuc operator/(const SoPhuc SP1, const SoPhuc SP2);

	friend bool operator==(const SoPhuc SP1, const SoPhuc SP2);
	friend bool operator!=(const SoPhuc SP1, const SoPhuc SP2);
};
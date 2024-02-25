#include "MangSoNguyen.h"

MangSoNguyen::MangSoNguyen()
{
	dulieu = new int[1];
	dulieu[0] = NULL;
	kichthuoc = 1;
}

MangSoNguyen::MangSoNguyen(int n)
{
	dulieu = new int[n];
	for (int i = 0; i < n; i++)
	{
		this->dulieu[i] = NULL;
	}
}

MangSoNguyen::~MangSoNguyen()
{
	//delete[] dulieu;
}

MangSoNguyen& MangSoNguyen::operator=(const MangSoNguyen& mang)
{
	if (this == &mang)
		return *this;
	this->kichthuoc = mang.kichthuoc;
	for (int i = 0; i < kichthuoc; i++)
	{
		this->dulieu[i] = mang.dulieu[i];
	}
	return *this;
}

MangSoNguyen& MangSoNguyen::operator++()
{
	for (int i = 0; i < kichthuoc; i++)
	{
		this->dulieu[i]++;
	}
	return *this;
}

MangSoNguyen MangSoNguyen::operator++(int)
{
	MangSoNguyen result;
	result = *this;
	for (int i = 0; i < kichthuoc; i++)
	{
		this->dulieu[i]++;
	}
	return result;
}

MangSoNguyen operator+(const MangSoNguyen m1, const MangSoNguyen m2)
{
	MangSoNguyen BArr, SArr;
	if (m1.kichthuoc > m2.kichthuoc)
	{
		BArr = m1;
		SArr = m2;
	}
	else
	{
		BArr = m2;
		SArr = m1;
	}
	for (int i = 0; i < SArr.kichthuoc; i++)
	{
		BArr.dulieu[i] += SArr.dulieu[i];
	}
	return BArr;
}

ostream& operator<<(ostream& os, MangSoNguyen m)
{
	cout << "Mang(" << m.kichthuoc << "): ";
	for (int i = 0; i < m.kichthuoc; i++)
	{
		cout << m.dulieu[i] << " ";
	}
	cout << endl;
	return os;
}

istream& operator>>(istream& is, MangSoNguyen& m)
{
	cout << "Kich thuoc mang: ";
	cin >> m.kichthuoc;
	cout << "Nhap mang: ";
	for (int i = 0; i < m.kichthuoc; i++)
	{
		cin >> m.dulieu[i];
	}
	return is;
}

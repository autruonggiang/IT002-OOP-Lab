#include "SoPhuc.h"
#include <iostream>
#include <math.h>

using namespace std;

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> PhanThuc;
	cout << "Nhap phan ao: ";
	cin >> PhanAo;
}

void SoPhuc::Xuat()
{
	cout << PhanThuc << " + " << PhanAo << +"i";
}

SoPhuc SoPhuc::Cong(SoPhuc other)
{
	SoPhuc kq;
	kq.PhanThuc = PhanThuc + other.PhanThuc;
	kq.PhanAo = PhanAo + other.PhanAo;

	return kq;
}

SoPhuc SoPhuc::Tru(SoPhuc other)
{
	SoPhuc kq;
	kq.PhanThuc = PhanThuc - other.PhanThuc;
	kq.PhanAo = PhanAo - other.PhanAo;

	return kq;
}

SoPhuc SoPhuc::Nhan(SoPhuc other)
{
	SoPhuc kq;
	kq.PhanThuc = PhanThuc * PhanAo - other.PhanThuc * other.PhanAo;
	kq.PhanAo = PhanThuc * other.PhanAo + other.PhanThuc * PhanAo;

	return kq;
}

SoPhuc SoPhuc::Chia(SoPhuc other)
{
	SoPhuc kq;
	kq.PhanThuc = (PhanThuc * other.PhanThuc + PhanAo * other.PhanAo) / (pow(PhanAo, 2) + pow(other.PhanAo, 2));
	kq.PhanAo = (other.PhanThuc * PhanAo - PhanThuc * other.PhanAo) / (pow(PhanAo, 2) + pow(other.PhanAo, 2));

	return kq;
}
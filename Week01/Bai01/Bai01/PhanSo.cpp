#include "PhanSo.h"
#include <iostream>

using namespace std;

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> TuSo;
	cout << "Nhap mau so: ";
	cin >> MauSo;
}

void PhanSo::Xuat()
{
	cout << TuSo << "/" << MauSo;
}

void PhanSo::SoThapPhan()
{
	float x;
	x = (float)TuSo / MauSo;
	cout << "Ket qua phep chia tu so va mau so: " << x;
}

PhanSo PhanSo::Cong(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.MauSo + MauSo * other.TuSo;
	kq.MauSo = MauSo * other.MauSo;

	return kq;
}

PhanSo PhanSo::Tru(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.MauSo - MauSo * other.TuSo;
	kq.MauSo = MauSo * other.MauSo;

	return kq;
}

PhanSo PhanSo::Nhan(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.TuSo;
	kq.MauSo = MauSo * other.MauSo;

	return kq;
}

PhanSo PhanSo::Chia(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.MauSo;
	kq.MauSo = MauSo * other.TuSo;

	return kq;
}
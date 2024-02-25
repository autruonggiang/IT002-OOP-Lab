#include "Diem.h"
#include <iostream>
#include <math.h>

using namespace std;

void Diem::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> HoanhDo;
	cout << "Nhap tung do: ";
	cin >> TungDo;
}

void Diem::Xuat()
{
	cout << "(" << HoanhDo << "; " << TungDo << ")";
}

double Diem::TinhKhoangCach(Diem other)
{
	double kc;

	kc = sqrt(pow(HoanhDo - other.HoanhDo, 2) + (pow(TungDo - other.TungDo, 2)));

	return kc;
}


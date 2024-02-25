#include "CanBo.h"
#include <iostream>

using namespace std;

void CanBo::Nhap()
{
	cin.ignore();
	cout << "Nhap ho va ten can bo: ";
	getline(cin, HoVaTen);
	cout << "Nhap ma so can bo: ";
	getline(cin, MaSo);
	cout << "Nhap ngay sinh can bo: ";
	getline(cin, NgaySinh);
}
void CanBo::Xuat()
{
	cout << "\nHo va ten can bo: " << HoVaTen;
	cout << "\nMa so can bo: " << MaSo;
	cout << "\nNgay sinh can bo: " << NgaySinh;
}
#include "CanBoNhaNuoc.h"
#include <iostream>
#include "CanBo.h"

using namespace std;

void CanBoNhaNuoc::Nhap()
{
	CanBo::Nhap();
	cout << "Nhap luong co ban can bo: ";
	cin >> LuongCoBan;
	cout << "Nhap he so luong can bo: ";
	cin >> HeSoLuong;
	cout << "Nhap he so phu cap can bo: ";
	cin >> HeSoPhuCap;
}

void CanBoNhaNuoc::Xuat()
{
	CanBo::Xuat();
	cout << "\nLuong co ban can bo: " << LuongCoBan;
	cout << "\nHe so luong can bo: " << HeSoLuong;
	cout << "\nHe so phu cap can bo: " << HeSoPhuCap;
}

float CanBoNhaNuoc::Luong()
{
	return LuongCoBan * HeSoLuong * HeSoPhuCap;
}
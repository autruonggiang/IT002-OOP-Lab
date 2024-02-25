#include "TroGiang.h"
#include <string>
#include <iostream>

using namespace std;

void TroGiang::Nhap()
{
	NhanSu::Nhap();
	cout << "\nSo mon tro giang: ";
	cin >> MonTroGiang;
}

void TroGiang::Xuat()const
{
	NhanSu::Xuat();
	cout << "So mon tro giang: " << MonTroGiang;
}
int TroGiang::TinhLuong()
{
	int luong;
	luong = 18000 * (MonTroGiang * 0, 3);
	return luong;
}
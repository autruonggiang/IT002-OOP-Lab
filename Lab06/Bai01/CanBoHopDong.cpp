#include "CanBoHopDong.h"
#include <iostream>
#include "CanBo.h"

using namespace std;

void CanBoHopDong::Nhap()
{
	CanBo::Nhap();
	//cin.ignore();
	cout << "Nhap tien cong can bo: ";
	cin >> TienCong;
	cout << "Nhap so ngay cong can bo: ";
	cin >> SoNgayCong;
	cout << "Nhap he so vuot gio can bo: ";
	cin >> HeSoVuotGio;
}

void CanBoHopDong::Xuat()
{
	CanBo::Xuat();
	cout << "\nTien cong can bo: " << TienCong;
	cout << "\nHe so ngay cong can bo: " << SoNgayCong;
	cout << "\nHe so vuot gio can bo: " << HeSoVuotGio;
}

float CanBoHopDong::Luong()
{
	return  TienCong * SoNgayCong * HeSoVuotGio;
}
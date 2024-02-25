#include "GiangVien.h"
#include <string>
#include <iostream>

using namespace std;

void GiangVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so tiet giang day: ";
	cin >> SoTietGiangDay;
	cout << "Nhap so de tai khoa luan: ";
	cin >> SoDeTaiKhoaLuan;
}

void GiangVien::Xuat()
{
	if (SoTietGiangDay >= 300 && SoDeTaiKhoaLuan >= 5)
	{
		NhanVien::Xuat();
		cout << "\nSo tiet giang day: " << SoTietGiangDay;
		cout << "\nSo de tai khoa luan: " << SoDeTaiKhoaLuan;
	}
}

#include "NghienCuuVien.h"
#include <string>
#include <iostream>

using namespace std;

void NghienCuuVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so de tai nghien cuu giang day: ";
	cin >> SoDeTaiNghienCuu;
	cout << "Nhap so bai bao khoa hoc khoa luan: ";
	cin >> SoBaiBaoKhoaHoc;
}

void NghienCuuVien::Xuat()
{
	if (SoDeTaiNghienCuu >= 1 && SoBaiBaoKhoaHoc >= 2)
	{
		NhanVien::Xuat();
		cout << "\nSo de tai nghien cuu giang day: " << SoDeTaiNghienCuu;
		cout << "\nSo bai bao khoa hoc: " << SoBaiBaoKhoaHoc;
	}
}
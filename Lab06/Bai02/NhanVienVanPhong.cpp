#include "NhanVienVanPhong.h"
#include <string>
#include <iostream>

using namespace std;

void NhanVienVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so luong lop boi duong: ";
	cin >> LopBoiDuong;
	cout << "Nhap so gio lao dong cong ich: ";
	cin >> LaoDongCongIch;
}

void NhanVienVanPhong::Xuat()
{
	if (LopBoiDuong >= 1 && LaoDongCongIch >= 20)
	{
		NhanVien::Xuat();
		cout << "\nSo luong lop boi duong: " << LopBoiDuong;
		cout << "\nSo gio lao dong cong ich: " << LaoDongCongIch;
	}
}
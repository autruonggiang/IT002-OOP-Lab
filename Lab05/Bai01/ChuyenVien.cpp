#include "ChuyenVien.h"
#include <string>
#include <iostream>

using namespace std;

void ChuyenVien::Nhap()
{
	NhanSu::Nhap();
	cout << "So ma giao duc ma chuyen vien da hoan tat: ";
	cin >> n;
	MaGiaoDuc[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, MaGiaoDuc[i]);
	}
	cout << "So nam kinh nghiem lam viec: ";
	cin >> KinhNghiem;
}

void ChuyenVien::Xuat()const
{
	NhanSu::Xuat();
	cout << "Danh sach cac du an giao duc da tham gia. ";
	for (int i = 0; i < n; i++)
		cout << MaGiaoDuc[i];
	cout << KinhNghiem << " nam kinh nghiem lam viec. ";
}
int ChuyenVien::KiemTraDuAn()
{
	int count = 0;
	string DuAnT = "T00";
	for (int i = 0; i < n; i++)
	{
		if (strncmp(MaGiaoDuc[i].c_str(), DuAnT.c_str(), 1) == 0)
			count++;
	}
	return count;
}
int ChuyenVien::TinhLuong()
{
	int luong;
	luong = 18000 * (KinhNghiem * 4 + KiemTraDuAn());
	return luong;
}
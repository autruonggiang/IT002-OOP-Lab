#include "NghienCuuVien.h"
#include <string>
#include <iostream>

using namespace std;

void NghienCuuVien::Nhap()
{
	NhanSu::Nhap();
	cout << "So ma nghien cuu ma nghien cuu vien da tham gia: ";
	cin >> n;
	MaNghienCuu[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, MaNghienCuu[i]);
	}
	cout << "So nam kinh nghiem nghien cuu: ";
	cin >> KinhNghiem;
}

void NghienCuuVien::Xuat()const
{
	NhanSu::Xuat();
	cout << "Danh sach cac du an nghien cuu da tham gia. " << endl;
	for (int i = 0; i < n; i++)
		cout << MaNghienCuu[i];
	cout << KinhNghiem << " nam kinh nghiem nghien cuu " << endl;;
}
int NghienCuuVien::KiemTraDuAn()
{
	int count = 0;
	string DuAnD = "D00";
	for (int i = 0; i < n; i++)
	{
		if (strncmp(MaNghienCuu[i].c_str(), DuAnD.c_str(), 1) == 0)
			count++;
	}
	return count;
}
int NghienCuuVien::TinhLuong()
{
	int luong;
	luong = 20000 * (KinhNghiem * 2 + KiemTraDuAn());
	return luong;
}
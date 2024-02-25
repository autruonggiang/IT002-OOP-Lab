#include "GiangVien.h"
#include <string>
#include <iostream>

using namespace std;

void GiangVien::Nhap()
{
	NhanSu::Nhap();
	cout << "Hoc ham, hoc vi: ";
	getline(cin, HocHam);
	getline(cin, HocVi);
	cout << "So mon hoc giang day: ";
	cin >> n;
	MonHoc[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, MonHoc[i]);
	}
	cout << "So nam kinh nghiem lam viec: ";
	cin >> NamDay;
}

void GiangVien::Xuat()const
{
	NhanSu::Xuat();
	cout << "Hoc ham: " << HocHam << endl;
	cout << "Hoc vi: " << HocVi << endl;
	cout << "Danh sach cac mon hoc dang giang day. \n";
	for (int i = 0; i < n; i++)
		cout << MonHoc[i];
	cout << NamDay << " nam kinh nghiem lam viec. ";
}
int GiangVien::TinhLuong()
{
	int luong;
	luong = 20000 * (NamDay * n * 0, 12);
	return luong;
}
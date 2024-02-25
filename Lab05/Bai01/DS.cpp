#include "DS.h"
#include <iostream>

using namespace std;

void DS::Nhap()
{
	int nhap;
	cout << "So luong nhan su trong truong dai hoc:  ";
	cin >> n;
	TDH = new NhanSu * [n];
	for (int i = 0; i < n; i++)
	{
		cout << "-------Menu-------\n Nhan 1 de nhap giang vien\n Nhan 2 de nhap tro giang\n Nhan 3 de nhap nghien cuu vien\n Nhan 4 de nhap chuyen vien\n";
		cin >> nhap;
		if (nhap == 1)
		{
			TDH[i] = new GiangVien;
			TDH[i]->Nhap();
			TDH[i]->TinhLuong();
		}
		else if (nhap == 2)
		{
			TDH[i] = new TroGiang;
			TDH[i]->Nhap();
			TDH[i]->TinhLuong();
		}
		else if (nhap == 3)
		{
			TDH[i] = new NghienCuuVien;
			TDH[i]->Nhap();
			TDH[i]->TinhLuong();
		}
		else if (nhap == 4)
		{
			TDH[i] = new ChuyenVien;
			TDH[i]->Nhap();
			TDH[i]->TinhLuong();
		}
	}
}

void DS::Xuat()
{
	cout << "DANH SACH NHAN SU TRONG TRUONG DAI HOC(theo thu tu): \n\n\n";
	for (int i = 0; i < n; i++)
	{
		TDH[i]->Xuat();
	}
}

void DS::TongLuong()
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += TDH[i]->TinhLuong();
	}
	cout << "\nTong luong phai tra cho nhan su la: " << tong << endl;
}
#include "NhanVien.h"
#include <iostream>

using namespace std;

void NhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ho va ten nhan vien: ";
	getline(cin, HoVaTen);
	cout << "Nhap ma so nhan vien: ";
	getline(cin, MaSo);
	cout << "Nhap ngay sinh nhan vien: ";
	getline(cin, NgaySinh);
}
void NhanVien::Xuat()
{
	cout << "\nHo va ten nhan vien: " << HoVaTen;
	cout << "\nMa so nhan vien: " << MaSo;
	cout << "\nNgay sinh nhan vien: " << NgaySinh;
}
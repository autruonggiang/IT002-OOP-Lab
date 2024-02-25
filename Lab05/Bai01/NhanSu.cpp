#include "NhanSu.h"
#include <string>
#include <iostream>

using namespace std;

void NhanSu::Nhap()
{
	cin.ignore();
	cout << "Nhap thong tin nhan su: " << endl;
	cout << "Ho va ten: ";
	getline(cin, HoTen);
	cout << "Ngay sinh: ";
	getline(cin, NgaySinh);
	cout << "Ma So Nhan Su: ";
	cin >> MSNS;
}

void NhanSu::Xuat()const
{
	cout << HoTen << endl;
	cout << NgaySinh << endl;
	cout << MSNS << endl;
}
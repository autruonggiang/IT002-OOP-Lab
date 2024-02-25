#include "HocSinh.h"
#include <iostream>
#include <string>

using namespace std;

bool HocSinh::Ktrhoten(string HoTen)
{
	for (int i = 0; i < HoTen.length(); i++)
	{
		if (!(
			(HoTen[i] >= 65 && HoTen[i] <= 90)
			|| (HoTen[i] >= 97 && HoTen[i] <= 122)
			|| (HoTen[i] == ' ')))
		{
			return false;
		}
	}
	return true;
}
bool HocSinh::KtrSdt(string Sdt)
{
	if (Sdt.length() >= 9 && Sdt.length() <= 11)
	{
		for (int i = 0; i < Sdt.length(); i++)
		{
			if (!(Sdt[i] >= '0' && Sdt[i] <= '9'))
			{
				return false;
			}
		}
		return true;
	}
	else
		return false;
}
bool HocSinh::KtrDTB(float DTB)
{
	return !((DTB < 0 || DTB>10));

}
void HocSinh::Nhap()
{
	do
	{
		cout << "Nhap ho ten: ";
		getline(cin, HoTen);
		if (!Ktrhoten(HoTen)) {
			cout << "Nhap lai: " << endl;
		}
	} while (!Ktrhoten(HoTen));
	do
	{
		cout << "Nhap ma so sinh vien: ";
		getline(cin, MaSo);
		if (MaSo.length() != 8)
		{
			cout << "nhap lai " << endl;
		}
	} while (MaSo.length() != 8);
	do
	{
		cout << "Nhap so dien thoai: ";
		getline(cin, Sdt);
		if (!KtrSdt(Sdt))
		{
			cout << "Nhap lai: " << endl;;
		}
	} while (!KtrSdt(Sdt));
	do
	{
		cout << "Nhap diem trung binh: ";
		cin >> DTB;
		if (!(KtrDTB(DTB)))
		{
			cout << "Nhap lai: " << endl;
		}
	} while (!(KtrDTB(DTB)));
	cin.ignore();
}
void HocSinh::Xuat()
{
	cout << HoTen << endl;
	cout << MaSo << endl;
	cout << Sdt << endl;
	cout << DTB << endl;
}
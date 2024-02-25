
#include "HocSinh.h"
#include<iostream>
#include<string>
using namespace std;
bool HocSinh::ktrhoten(string HoTen)
{
	for (int i = 0; i < HoTen.length(); i++)
	{
		if (!(
			(HoTen[i] >= 65 && HoTen[i] <= 90)
			|| (HoTen[i] >= 97 && HoTen[i] <= 122)
			|| (HoTen[i] == ' '))
			)
		{
			return false;
		}
	}
	return true;
}
bool HocSinh::ktrSdt(string Sdt)
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
bool HocSinh::ktrDTB(float DTB)
{
	return !((DTB < 0 || DTB>10));

}
void HocSinh::nhap()
{
	do
	{
		cout << "nhap ho ten: ";
		getline(cin, HoTen);
		if (!ktrhoten(HoTen)) {
			cout << "nhap lai: " << endl;
		}
	} while (!ktrhoten(HoTen));
	do
	{
		cout << "nhap ma so sinh vien: ";
		getline(cin, MaSo);
		if (MaSo.length() != 8)
		{
			cout << "nhap lai " << endl;
		}
	} while (MaSo.length() != 8);
	do
	{
		cout << "nhap so dien thoai: ";
		getline(cin, Sdt);
		if (!ktrSdt(Sdt))
		{
			cout << "nhap lai: " << endl;;
		}
	} while (!ktrSdt(Sdt));
	do
	{
		cout << "nhap diem trung binh: ";
		cin >> DTB;
		if (!(ktrDTB(DTB)))
		{
			cout << "nhap lai: " << endl;
		}
	} while (!(ktrDTB(DTB)));
	cin.ignore();
}
void HocSinh::xuat()
{
	cout << HoTen << endl;
	cout << MaSo << endl;
	cout << Sdt << endl;
	cout << DTB << endl;
}
#include "LopHoc.h"
#include<vector>
#include<iostream>
#include<string>
using namespace std;
bool LopHoc::ktrHocSinh(HocSinh* a)
{
	if (dsHS.size() > 0)
	{
		for (int i = 0; i < dsHS.size(); ++i)
		{
			if (dsHS[i]->GetHoTen() == a->GetHoTen())
			{
				return false;
			}
			/*HocSinh* i = dsHS.begin(); i != dsHS.end(); ++i
			int i = 0; i < dsHS.size(); ++i
			*/
		}
	}

	return true;
}
void LopHoc::nhap(int n)
{
	HocSinh* a;
	for (int i = 0; i < n; i++)
	{

		a = new HocSinh;
		a->nhap();

		if (!ktrHocSinh(a))
		{
			cout << "Da co hoc sinh trong lop " << endl;

		}
		else
		{
			dsHS.push_back(a);
			cout << "Da nhap thanh cong \n\n";
		}
	}
}
void LopHoc::XoaHs(int a)
{
	if (a > dsHS.size() && a < 0)
	{
		cout << "khong tim thay hoc sinh";
	}
	else
	{
		dsHS.erase(dsHS.begin() + a - 1);
	}
}
void LopHoc::xuat()
{

	for (int i = 0; i < dsHS.size(); i++)
	{
		dsHS[i]->xuat();
	}
}
void LopHoc::HSDIemTrenTam()
{
	for (int i = 0; i < dsHS.size(); i++)
	{
		if (dsHS[i]->GetDTB() > 8)
		{
			dsHS[i]->xuat();
		}
	}
}

void LopHoc::File() {
	ifstream f;

	f.open("LopHoc.txt", ios_base::in);
	/*int n;
	f >> n;*/
	if (f.fail() == true)
	{
		cout << "file khong ton tai";
		return;
	}
	int n;
	f >> n;
	cout << "\n\ntong so hoc sinh: " << n << endl;

	for (int i = 0; i < n; i++)
	{

		f.ignore();
		string hoten;
		getline(f, hoten);
		cout << "\nho ten: " << hoten << endl;

		string mahs;
		getline(f, mahs);
		cout << "ma: " << mahs << endl;

		string sdt;
		getline(f, sdt);
		cout << "so dien thoai " << sdt << endl;

		float dtb;
		f >> dtb;
		cout << "diem trung binh " << dtb << endl;
	}
	f.close();

}
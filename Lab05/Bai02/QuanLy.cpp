#include "QuanLy.h"
#include "NongTrai.h"
#include <iostream>

using namespace std;

void QuanLy::Nhap()
{
	int nhap;
	cout << "Nhap so luong gia suc: \n";
	cin >> n;
	QL = new NongTrai * [n];
	for (int i = 0; i < n; i++)
	{
		cout << "Ban muon nhap gia suc loai nao?\n Nhan 1 de nhap bo\n Nhan 2 de nhap cuu\n Nhan 3 de nhap de\n";
		cin >> nhap;
		if (nhap == 1)
		{
			QL[i] = new Bo;
			QL[i]->Nhap();
			TongSua += QL[i]->ChoSua();
			SoBo += 1;
			BoCon += QL[i]->SinhCon();
		}
		else if (nhap == 2)
		{
			QL[i] = new Cuu;
			QL[i]->Nhap();
			TongSua += QL[i]->ChoSua();
			SoCuu += 1;
			CuuCon += QL[i]->SinhCon();
		}
		else if (nhap == 3)
		{
			QL[i] = new De;
			QL[i]->Nhap();
			TongSua += QL[i]->ChoSua();
			SoDe += 1;
			DeCon += QL[i]->SinhCon();
		}
	}

}
void QuanLy::Xuat()
{
	cout << "Trang Trai: \n\n\n";
	TongCon();
	cout << "Tong luong sua: " << TongSua << endl;
}

void QuanLy::TongCon()
{
	cout << "So bo la: " << SoBo + BoCon << endl;
	cout << "So cuu la: " << SoCuu + CuuCon << endl;
	cout << "So de la: " << SoDe + DeCon << endl;
}
void QuanLy::Doi()
{
	cout << "Ca nong trai dang bi bo doi, cac gia suc dang keu la\n"
		<< "Bo keu Um booooooo\n"
		<< "Cuu keu Bee beee\n"
		<< "De keu Beeeeee\n";
}
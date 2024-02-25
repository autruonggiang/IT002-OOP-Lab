#include "QL.h"
#include <iostream>

using namespace std;

void QL::SoLuong()
{
	cout << "Nhap vao so luong can bo: ";
	cin >> n;

	DS = new CanBo * [n];
}

void QL::Nhap()
{

	SoLuong();

	int type;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao loai can bo\n(1. Can bo nha nuoc)\n(2. Can bo hop dong)\n";
		cin >> type;
		switch (type)
		{
		case 1:
			DS[i] = new CanBoNhaNuoc;
			DS[i]->Nhap();
			sum = sum + DS[i]->Luong();
			break;
		case 2:
			DS[i] = new CanBoHopDong;
			DS[i]->Nhap();
			sum = sum + DS[i]->Luong();
			break;

		default:
			cout << "Nhap khong ton tai loai can bo \n";
			cin >> type;
		}

	}
}

void QL::Xuat()
{

	for (int i = 0; i < n; i++)
	{
		DS[i]->Xuat();
	}
}

float QL::Luong()
{
	return sum;
}
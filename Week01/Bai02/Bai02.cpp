#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main()
{
	SoPhuc a, b;

	cout << "[So phuc thu nhat]\n";
	a.Nhap();
	cout << "[So phuc thu hai]\n";
	b.Nhap();

	cout << "So phuc thu nhat thu duoc: ";
	a.Xuat();
	cout << "\n";
	cout << "So phuc thu hai thu duoc: ";
	b.Xuat();
	cout << "\n";
	cout << "\nTong hai so phuc: " << endl;
	a.Cong(b).Xuat();
	cout << "\nHieu hai so phuc: " << endl;
	a.Tru(b).Xuat();
	cout << "\nTich hai so phuc: " << endl;
	a.Nhan(b).Xuat();
	cout << "\nThuong hai so phuc: " << endl;
	a.Chia(b).Xuat();

	return 0;
}
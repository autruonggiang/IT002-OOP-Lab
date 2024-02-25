#include "NongTrai.h"
#include <iostream>

using namespace std;

void NongTrai::Nhap()
{
	cout << "Nhap tong so luong gia suc o trong nong trai: \n";
	cin >> GiaSuc;
}

void NongTrai::Xuat()
{
	cout << "Tong so luong gia suc o trong nong trai: \n" << GiaSuc;
}
int NongTrai::GetGiaSuc()
{
	return GiaSuc;
}
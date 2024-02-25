#include "PhanSo.h"
#include <iostream>

using namespace std;

int main()
{
    PhanSo a, b;

    cout << "[Nhap phan so thu nhat] \n";
    a.Nhap();
    cout << "[Nhap phan so thu hai] \n";
    b.Nhap();

    cout << "Phan so thu nhat thu duoc: ";
    a.Xuat();
    cout << "\n";
    cout << "Phan so thu hai thu duoc: ";
    b.Xuat();
    cout << "\n";
    a.SoThapPhan();
    cout << "\n";
    b.SoThapPhan();
    cout << "\nTong hai phan so: ";
    a.Cong(b).Xuat();
    cout << "\nHieu hai phan so: ";
    a.Tru(b).Xuat();
    cout << "\nTich hai phan so: ";
    a.Nhan(b).Xuat();
    cout << "\nThuong hai phan so: ";
    a.Chia(b).Xuat();

    return 0;
}


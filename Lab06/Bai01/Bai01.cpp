#include <iostream>
#include "CanBo.h"
#include "CanBoNhaNuoc.h"
#include "CanBoHopDong.h"
#include "QL.h"

using namespace std;

int main()
{
    QL a;
    a.Nhap();
    a.Xuat();
    cout << "Tong luong ma cong ty ABC phai tra la: " << a.Luong();

}
#include "Diem.h"
#include <iostream>

using namespace std;

int main()
{
    Diem a, b;

    cout << "[NHAP DIEM THU NHAT] \n";
    a.Nhap();
    cout << "\n";
    cout << "[NHAP DIEM THU HAI] \n";
    b.Nhap();
    cout << "\n";
    cout << "Toa do diem thu nhat: ";
    a.Xuat();
    cout << "\n";
    cout << "Toa do diem thu hai: ";
    b.Xuat();
    cout << "\nKhoang cach giua hai diem: \n";
    cout << a.TinhKhoangCach(b);

    return 0;
}


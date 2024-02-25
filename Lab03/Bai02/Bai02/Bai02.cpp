#include <iostream>
#include"LopHoc.h"
using namespace std;
int main()
{
    LopHoc a, b;
    a.nhap(3);
    cout << endl;
    a.xuat();
    cout << "Danh sach hoc sinh diem trung binh tren 8:\n";
    a.HSDIemTrenTam();
    cout << "\nsau khi xoa thanh vien thu 1:\n ";
    a.XoaHs(2);
    a.xuat();

    cout << "   \n===== FILE=======\n";
    b.File();

}


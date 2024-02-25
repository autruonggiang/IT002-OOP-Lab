#pragma once
#include <string>
#include <iostream>

using namespace std;

class NhanVien
{
protected:
	string HoVaTen, MaSo, NgaySinh;
public:
	virtual void Nhap();
	virtual void Xuat();
};

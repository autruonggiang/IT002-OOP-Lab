#pragma once
#include <string>

using namespace std;

class CanBo
{
protected:
	string HoVaTen, MaSo, NgaySinh;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float Luong() = 0;
};

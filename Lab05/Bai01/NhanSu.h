#pragma once
#include <string>

using namespace std;

class NhanSu
{
private:
	string HoTen, NgaySinh;
	int MSNS;
public:
	virtual void Nhap();
	virtual void Xuat()const;
	virtual int TinhLuong() = 0;
};

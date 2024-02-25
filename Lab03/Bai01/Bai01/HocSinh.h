#pragma once
#include <string>

using namespace std;

class HocSinh
{
private:
	string HoTen;
	string MaSo;
	string Sdt;
	float DTB;
public:
	void Nhap();
	bool Ktrhoten(string);
	bool KtrSdt(string);
	bool KtrDTB(float);
	void Xuat();

};
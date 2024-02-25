#pragma once
#include <string>;

using namespace std;

class NongTrai
{
private:
	int GiaSuc;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int SinhCon() = 0;
	virtual int ChoSua() = 0;
	int GetGiaSuc();


};

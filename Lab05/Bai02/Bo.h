#pragma once
#include "NongTrai.h"
class Bo :public NongTrai
{
private:
	int con, sua;
	string TiengKeu = "Um bo";
public:
	void Nhap();
	void Xuat();
	int SinhCon();
	int ChoSua();
	string GetTiengKeu();
};

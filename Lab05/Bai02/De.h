#pragma once
#include "NongTrai.h"
class De :public NongTrai
{
private:
	int con, sua;
	string TiengKeu = "Um De";
public:
	void Nhap();
	void Xuat();
	int SinhCon();
	int ChoSua();
	string GetTiengKeu();
};

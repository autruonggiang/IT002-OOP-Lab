#pragma once
#include "NongTrai.h"
class Cuu :public NongTrai
{
private:
	int con, sua;
	string TiengKeu = "Beeeeeeeeeee Beeeeeeee";
public:
	void Nhap();
	void Xuat();
	int SinhCon();
	int ChoSua();
	string GetTiengKeu();
};

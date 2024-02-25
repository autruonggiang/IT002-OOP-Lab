#pragma once
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include "NongTrai.h"
class QuanLy
{
private:
	int n, SoBo = 0, SoCuu = 0, SoDe = 0, BoCon = 0, CuuCon = 0, DeCon = 0, TongSua;
	NongTrai** QL;
public:
	void Nhap();
	void Xuat();
	void Doi();
	void TongCon();
};

#pragma once
#include "CanBo.h"
#include "CanBoNhaNuoc.h"
#include "CanBoHopDong.h"

class QL
{
	int n;
	float sum = 0;
	CanBo** DS;

public:
	void Nhap();
	void Xuat();
	float Luong();
	void SoLuong();
};

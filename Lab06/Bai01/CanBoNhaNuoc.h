#pragma once
#include "CanBo.h"


class CanBoNhaNuoc : public CanBo
{
protected:
	float LuongCoBan, HeSoLuong, HeSoPhuCap;
public:
	void Nhap();
	void Xuat();
	float Luong();
};

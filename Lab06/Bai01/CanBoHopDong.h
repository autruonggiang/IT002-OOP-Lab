#pragma once
#include "CanBo.h"


class CanBoHopDong : public CanBo
{
protected:
	float TienCong, SoNgayCong, HeSoVuotGio;
public:
	void Nhap();
	void Xuat();
	float Luong();
};

#pragma once
#include "NhanVien.h"

class GiangVien : public NhanVien
{
protected:
	int SoTietGiangDay, SoDeTaiKhoaLuan;
public:
	void Nhap();
	void Xuat();
};

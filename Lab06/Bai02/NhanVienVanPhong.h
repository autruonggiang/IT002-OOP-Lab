#pragma once
#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien
{
protected:
	int LopBoiDuong, LaoDongCongIch;
public:
	void Nhap();
	void Xuat();
	float Luong();
};

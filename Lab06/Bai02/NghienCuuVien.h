#pragma once
#include "NhanVien.h"

class NghienCuuVien : public NhanVien
{
protected:
	int SoDeTaiNghienCuu, SoBaiBaoKhoaHoc;
public:
	void Nhap();
	void Xuat();
};

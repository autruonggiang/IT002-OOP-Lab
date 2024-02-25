#pragma once
#include "ChuyenVien.h"
#include "NhanSu.h"
#include "GiangVien.h"
#include "NghienCuuVien.h"
#include "TroGiang.h"

class DS
{
private:
	int n;
	NhanSu** TDH;
public:
	void Nhap();
	void Xuat();
	void TongLuong();
};

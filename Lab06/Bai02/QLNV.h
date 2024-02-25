#pragma once
#include "NhanVien.h"
#include "GiangVien.h"
#include "NghienCuuVien.h"
#include "NhanVienVanPhong.h"


class QLNV : public NhanVien
{
	int n;
	NhanVien** DS;

public:
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream& is, QLNV& a);
	friend ostream& operator<<(ostream& os, QLNV& a);
};

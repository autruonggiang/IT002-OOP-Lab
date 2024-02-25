#pragma once

class PhanSo
{
private:
	int TuSo;
	int MauSo;
public:
	void Nhap();
	void Xuat();
	void SoThapPhan();
	PhanSo Cong(PhanSo other);
	PhanSo Tru(PhanSo other);
	PhanSo Nhan(PhanSo other);
	PhanSo Chia(PhanSo other);
};
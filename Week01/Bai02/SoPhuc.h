#pragma once

class SoPhuc
{
private:
	double PhanThuc;
	double PhanAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Cong(SoPhuc other);
	SoPhuc Tru(SoPhuc other);
	SoPhuc Nhan(SoPhuc other);
	SoPhuc Chia(SoPhuc other);
};
#pragma once

class Diem
{
private:
	double HoanhDo;
	double TungDo;
	double KhoangCach;
public:
	void Nhap();
	void Xuat();
	double TinhKhoangCach(Diem other);
};
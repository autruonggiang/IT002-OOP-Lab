#pragma once
#include "NhanSu.h"
#include <string>

using namespace std;
class NghienCuuVien :public NhanSu
{
private:
	string MaNghienCuu[100];
	int KinhNghiem;
	int n;
public:
	void Nhap();
	void Xuat()const;
	int KiemTraDuAn();
	int TinhLuong();
};

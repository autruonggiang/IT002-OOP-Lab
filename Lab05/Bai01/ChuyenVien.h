#pragma once
#include "NhanSu.h"
#include <string>

using namespace std;
class ChuyenVien :public NhanSu
{
private:
	string MaGiaoDuc[100];
	int KinhNghiem;
	int n;
public:
	void Nhap();
	void Xuat()const;
	int KiemTraDuAn();
	int TinhLuong();
};

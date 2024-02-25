#pragma once
#include "NhanSu.h"
#include <string>

using namespace std;
class GiangVien :public NhanSu
{
private:
	string HocHam, HocVi;
	int NamDay;
	int n;
	string MonHoc[100];

public:
	void Nhap();
	void Xuat()const;
	int TinhLuong();
};

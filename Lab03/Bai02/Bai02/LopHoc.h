#pragma once
#include"HocSinh.h"
#include<vector>
#include<fstream>
class LopHoc
{
	vector<HocSinh*> dsHS;
public:
	bool ktrHocSinh(HocSinh*);
	void nhap(int n);
	void XoaHs(int a);
	void xuat();
	void HSDIemTrenTam();
	void File();
};

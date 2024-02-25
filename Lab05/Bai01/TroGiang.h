#pragma once
#include "NhanSu.h"
#include <string>

using namespace std;
class TroGiang :public NhanSu
{
private:
	int MonTroGiang;
public:
	void Nhap();
	void Xuat()const;
	int TinhLuong();
};



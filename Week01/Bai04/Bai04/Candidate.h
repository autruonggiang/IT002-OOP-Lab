#pragma once
#include <string>

using namespace std;

class Candidate
{
private:
	string Ma, HoTen, NgaySinh;
	float Toan, Van, Anh;
public:
	void Nhap();
	void Xuat();
	float TongDiem();
};
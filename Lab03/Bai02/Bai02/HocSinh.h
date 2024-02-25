#include<string>
using namespace std;
class HocSinh
{
private:
	string HoTen;
	string MaSo;
	string Sdt;
	float DTB;
public:
	void nhap();
	bool ktrhoten(string);
	string GetHoTen()
	{
		return HoTen;
	}
	float GetDTB()
	{
		return DTB;
	}
	void setHoten(string hoten)
	{
		HoTen = hoten;

	}
	void setMaSo(string ms)
	{
		MaSo = ms;
	}
	void setSDT(string sdt)
	{
		Sdt = sdt;
	}
	void setDTB(float dtb)
	{
		DTB = dtb;
	}
	bool ktrSdt(string);
	bool ktrDTB(float);
	void xuat();
};
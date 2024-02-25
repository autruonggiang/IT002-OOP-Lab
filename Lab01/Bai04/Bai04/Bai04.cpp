#include "TestCandidate.h"
#include <iostream>

using namespace std;

int main()
{
	TestCandidate a;

	cout << "[NHAP THONG TIN CUA CAC THI SINH]\n";
	a.Nhap();
	cout << "[HO SO XUAT RA CUA CAC THI SINH]\n";
	a.Xuat();
	cout << "[NHUNG THI SINH CO TONG DIEM BA MON LON HON 15]\n";

	a.KiemTraDiemLonHon15();

	return 0;
}


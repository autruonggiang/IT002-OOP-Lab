#include "TestCandidate.h"
#include <iostream>

using namespace std;

void TestCandidate::Nhap()
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;

	listCandidate = new Candidate[n];

	for (int i = 0; i < n; i++)
		listCandidate[i].Nhap();
}

void TestCandidate::Xuat()
{
	for (int i = 0; i < n; i++)
		listCandidate[i].Xuat();
}

void TestCandidate::KiemTraDiemLonHon15()
{
	for (int i = 0; i < n; i++)
		if (listCandidate[i].TongDiem() > 15)
			listCandidate[i].Xuat();
}
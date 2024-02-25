#include "Candidate.h"
#include <iostream>

using namespace std;

void Candidate::Nhap()
{
	cin.ignore();
	cout << "Nhap ma thi sinh: ";
	getline(cin, Ma);
	cout << "Nhap ho va ten thi sinh: ";
	getline(cin, HoTen);
	cout << "Nhap ngay thang nam sinh cua thi sinh: ";
	getline(cin, NgaySinh);
	cout << "Nhap diem mon Toan: ";
	cin >> Toan;
	cout << "Nhap diem mon Ngu Van: ";
	cin >> Van;
	cout << "Nhap diem mon Tieng Anh: ";
	cin >> Anh;
}

void Candidate::Xuat()
{
	cout << "Ma thi sinh: " << Ma << endl;
	cout << "Ho va ten: " << HoTen << endl;
	cout << "Ngay thang nam sinh: " << NgaySinh << endl;
	cout << "Diem Toan: " << Toan << endl;
	cout << "Diem Ngu Van: " << Van << endl;
	cout << "Diem Tieng Anh: " << Anh << endl;

}

float Candidate::TongDiem()
{
	return (Toan + Van + Anh);
}
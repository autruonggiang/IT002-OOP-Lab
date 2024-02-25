#include "QLNV.h"

using namespace std;

void QLNV::Nhap() {
	DS = new NhanVien * [n];

	int type;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao loai nhan vien\n(1-Giang Vien)\n(2-Nghien Cuu VIen)\n(3-Nhan vien van phong)\n";
		cin >> type;
		switch (type)
		{
		case 1:
			DS[i] = new GiangVien;
			DS[i]->Nhap();
			break;
		case 2:
			DS[i] = new NghienCuuVien;
			DS[i]->Nhap();
			break;
		case 3:
			DS[i] = new NhanVienVanPhong;
			DS[i]->Nhap();
			break;

		default:
			cout << "Nhap khong ton tai loai nhan vien \n";
			cin >> type;
		}

	}
}

void QLNV::Xuat() {
	for (int i = 0; i < n; i++)
	{
		DS[i]->Xuat();
	}
}

istream& operator>>(istream& is, QLNV& a)
{
	cout << "Nhap vao so luong nhan vien: ";
	is >> a.n;

	a.Nhap();

	return is;
}

ostream& operator<<(ostream& os, QLNV& a)
{

	a.Xuat();

	return os;
}
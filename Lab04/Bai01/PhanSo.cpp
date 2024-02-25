#include"PhanSo.h"
PhanSo::PhanSo()
{
	tuso = new int;
	*tuso = 0;
	mauso = new int;
	*mauso = 1;
}
PhanSo::PhanSo(int tu, int mau = 1)
{
	tuso = new int;
	*tuso = tu;
	mauso = new int;
	*mauso = mau;
}


//PhanSo::~PhanSo()
//{
//	delete tuso;
//	delete mauso;
//}

istream& operator>>(istream& is, PhanSo& ps)
{
	cout << "Nhap tu so: ";
	is >> *ps.tuso;
	cout << "Nhap mau so: ";
	is >> *ps.mauso;
	return is;
}
ostream& operator<<(ostream& os, PhanSo ps)
{
	if (*ps.tuso * *ps.mauso > 0) os << abs(*ps.tuso) << "/" << abs(*ps.mauso) << " ";
	if (*ps.tuso * *ps.mauso < 0) os << "-" << abs(*ps.tuso) << "/" << abs(*ps.mauso) << " ";
	if (*ps.tuso == 0) cout << "0 ";
	if (*ps.mauso == 0) cout << "[ERRON] Loi phan so!";
	return os;
}

PhanSo& PhanSo::operator=(const PhanSo& ps)
{
	if (this == &ps)
		return *this;
	this->tuso = ps.tuso;
	this->mauso = ps.mauso;
	return *this;
}
PhanSo& PhanSo::operator+=(const PhanSo& ps)
{
	*this->tuso = (*this->tuso) * (*ps.mauso) + (*this->mauso) * (*ps.tuso);
	*this->mauso = (*this->mauso) * (*ps.mauso);
	RutGon();
	return *this;
}
PhanSo& PhanSo::operator-=(const PhanSo& ps)
{
	*this->tuso = (*this->tuso) * (*ps.mauso) - (*this->mauso) * (*ps.tuso);
	*this->mauso = (*this->mauso) * (*ps.mauso);
	RutGon();
	return *this;
}
PhanSo& PhanSo::operator*=(const PhanSo& ps)
{
	*this->tuso = (*this->tuso) * (*ps.tuso);
	*this->mauso = (*this->mauso) * (*ps.mauso);
	RutGon();
	return *this;
}
PhanSo& PhanSo::operator/=(const PhanSo& ps)
{
	*this->tuso = (*this->tuso) * (*ps.mauso);
	*this->mauso = (*this->mauso) * (*ps.tuso);
	RutGon();
	return *this;
}

PhanSo& PhanSo::operator++()
{
	*this->tuso = *this->tuso + *this->mauso;
	RutGon();
	return *this;
}

PhanSo PhanSo::operator++(int)
{
	PhanSo result(*this);
	*this->tuso = *this->tuso + *this->mauso;
	return result;
}
PhanSo& PhanSo::operator--()
{
	*this->tuso = *this->tuso - *this->mauso;
	RutGon();
	return *this;
}

PhanSo PhanSo::operator--(int)
{
	PhanSo result(*this);
	*this->tuso = *this->tuso - *this->mauso;
	return result;
}

PhanSo operator+(const PhanSo PS1, const PhanSo PS2) {
	PhanSo Temp;
	*Temp.tuso = (*PS1.tuso) * (*PS2.mauso) + (*PS2.tuso) * (*PS1.mauso);
	*Temp.mauso = (*PS1.mauso * *PS2.mauso);
	Temp.RutGon();
	return Temp;
}
PhanSo operator-(const PhanSo PS1, const PhanSo PS2) {
	PhanSo Temp;
	*Temp.tuso = (*PS1.tuso) * (*PS2.mauso) - (*PS2.tuso) * (*PS1.mauso);
	*Temp.mauso = (*PS1.mauso) * (*PS2.mauso);
	Temp.RutGon();
	return Temp;
}
PhanSo operator*(const PhanSo PS1, const PhanSo PS2) {
	PhanSo Temp;
	*Temp.tuso = (*PS1.tuso) * (*PS2.tuso);

	*Temp.mauso = (*PS1.mauso) * (*PS2.mauso);
	Temp.RutGon();

	return Temp;
}
PhanSo operator/(const PhanSo PS1, const PhanSo PS2) {
	PhanSo Temp;
	*Temp.tuso = *PS1.tuso * *PS2.mauso;
	*Temp.mauso = *PS1.mauso * *PS2.tuso;
	Temp.RutGon();
	return Temp;
}

PhanSo PhanSo::RutGon() {
	int a, b;
	PhanSo ps;

	ps.tuso = this->tuso;
	ps.mauso = this->mauso;

	a = abs(*ps.tuso);
	b = abs(*ps.mauso);
	if (a != 0)
	{
		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}

		*ps.tuso = *ps.tuso / a;
		*ps.mauso = *ps.mauso / a;
	}
	else
	{
		*ps.tuso = 0;
		*ps.mauso = 1;
	}
	return ps;
}

bool operator==(const PhanSo PS1, const PhanSo PS2)
{
	int result = (*PS1.tuso) * (*PS2.mauso) - (*PS1.mauso) * (*PS2.tuso);
	if (result == 0)
		return true;
	else
		return false;
}
bool operator!=(const PhanSo PS1, const PhanSo PS2)
{
	int result = (*PS1.tuso) * (*PS2.mauso) - (*PS1.mauso) * (*PS2.tuso);
	if (result != 0)
		return true;
	else
		return false;
}
bool operator>(const PhanSo PS1, const PhanSo PS2)
{
	int result = (*PS1.tuso) * (*PS2.mauso) - (*PS1.mauso) * (*PS2.tuso);
	if (result > 0)
		return true;
	else
		return false;
}
bool operator<(const PhanSo PS1, const PhanSo PS2)
{
	int result = (*PS1.tuso) * (*PS2.mauso) - (*PS1.mauso) * (*PS2.tuso);
	if (result < 0)
		return true;
	else
		return false;
}
bool operator>=(const PhanSo PS1, const PhanSo PS2)
{
	int result = (*PS1.tuso) * (*PS2.mauso) - (*PS1.mauso) * (*PS2.tuso);
	if (result >= 0)
		return true;
	else
		return false;
}
bool operator<=(const PhanSo PS1, const PhanSo PS2)
{
	int result = (*PS1.tuso) * (*PS2.mauso) - (*PS1.mauso) * (*PS2.tuso);
	if (result <= 0)
		return true;
	else
		return false;
}

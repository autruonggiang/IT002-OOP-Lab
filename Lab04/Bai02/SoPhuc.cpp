#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	Thuc = 0;
	Ao = 0;
}
SoPhuc::SoPhuc(float t, float a)
{
	Thuc = t;
	Ao = a;
}

istream& operator>>(istream& is, SoPhuc& sp)
{
	cout << "Nhap phan thuc: ";
	is >> sp.Thuc;
	cout << "Nhap phan ao: ";
	is >> sp.Ao;
	return is;
}
ostream& operator<<(ostream& os, SoPhuc sp)
{
	if (sp.Thuc == 0 && sp.Ao == 0) cout << "0 ";
	if (sp.Thuc == 0)
	{
		if (sp.Ao > 0)
		{
			if (sp.Ao != 1) cout << sp.Ao << "i ";
			if (sp.Ao == 1) cout << "i ";
		}
		if (sp.Ao < 0)
		{
			if (sp.Ao != -1) cout << sp.Ao << "i ";
			if (sp.Ao == -1) cout << "-i ";
		}
	}
	else
	{
		cout << sp.Thuc;
		if (sp.Ao != 0)
		{
			if (sp.Ao > 0)
			{
				cout << " +";
				if (sp.Ao != 1) cout << sp.Ao << "i ";
				if (sp.Ao == 1) cout << "i ";
			}
			if (sp.Ao < 0)
			{
				if (sp.Ao != -1) cout << " " << sp.Ao << "i ";
				if (sp.Ao == -1) cout << " -i ";
			}
		}
	}

	return os;
}

SoPhuc& SoPhuc::operator=(const SoPhuc& SP)
{
	if (this == &SP)
		return *this;
	this->Thuc = SP.Thuc;
	this->Ao = SP.Ao;
	return *this;
}

SoPhuc operator+(const SoPhuc SP1, const SoPhuc SP2)
{
	return SoPhuc(SP1.Thuc + SP2.Thuc, SP1.Ao + SP2.Ao);
}
SoPhuc operator-(const SoPhuc SP1, const SoPhuc SP2)
{
	return SoPhuc(SP1.Thuc + SP2.Thuc, SP1.Ao + SP2.Ao);
}
SoPhuc operator*(const SoPhuc SP1, const SoPhuc SP2)
{
	return SoPhuc(SP1.Thuc * SP2.Thuc - SP1.Ao * SP2.Ao, SP1.Thuc * SP2.Ao + SP1.Ao * SP2.Thuc);
}
SoPhuc operator/(const SoPhuc SP1, const SoPhuc SP2)
{
	float Thuc, Ao;
	Thuc = (SP1.Thuc * SP2.Thuc + SP1.Ao * SP2.Ao) / (SP2.Thuc * SP2.Thuc + SP2.Ao * SP2.Ao);
	Ao = (SP2.Thuc * SP1.Ao - SP2.Ao * SP1.Thuc) / (SP2.Thuc * SP2.Thuc + SP2.Ao * SP2.Ao);
	return SoPhuc(Thuc, Ao);
}

bool operator==(const SoPhuc SP1, const SoPhuc SP2)
{
	if (SP1.Thuc != SP2.Thuc) return false;
	if (SP1.Ao != SP2.Ao) return false;
	return true;
}
bool operator!=(const SoPhuc SP1, const SoPhuc SP2)
{
	if (SP1.Thuc == SP2.Thuc && SP1.Ao == SP2.Ao) return false;
	return true;
}
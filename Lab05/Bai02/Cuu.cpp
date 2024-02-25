#include "Cuu.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Cuu::Nhap()
{
	srand(time(NULL));
	con = rand();
	srand(time(NULL));
	sua = rand() % (5 - 0 + 1);
}
void Cuu::Xuat()
{
	cout << "Cuu de duoc " << con << " con.\n";
	cout << "Cuu cho " << sua << " lit sua.\n";
	cout << TiengKeu;
}
int Cuu::SinhCon()
{
	return con;
}
int Cuu::ChoSua()
{
	return sua;
}
string Cuu::GetTiengKeu()
{
	return TiengKeu;
}
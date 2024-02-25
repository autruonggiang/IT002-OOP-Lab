#include "De.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void De::Nhap()
{
	srand(time(NULL));
	con = rand();
	srand(time(NULL));
	sua = rand() % (10 - 0 + 1);
}
void De::Xuat()
{
	cout << "De de duoc " << con << " con.\n";
	cout << "De cho " << sua << " lit sua.\n";
	cout << TiengKeu;
}
int De::SinhCon()
{
	return con;
}
int De::ChoSua()
{
	return sua;
}
string De::GetTiengKeu()
{
	return TiengKeu;
}
#include "Bo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Bo::Nhap()
{
	srand(time(NULL));
	con = rand();
	srand(time(NULL));
	sua = rand() % (20 - 0 + 1);
}
void Bo::Xuat()
{
	cout << "Bo de duoc " << con << " con.\n";
	cout << "Bo cho " << sua << " lit sua.\n";
	cout << TiengKeu;
}
int Bo::SinhCon()
{
	return con;
}
int Bo::ChoSua()
{
	return sua;
}
string Bo::GetTiengKeu()
{
	return TiengKeu;
}
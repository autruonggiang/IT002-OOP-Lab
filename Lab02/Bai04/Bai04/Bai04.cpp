#include <iostream>
#include "MangMotChieu.h"

using namespace std;
int main()
{
	MangMotChieu Array;

	Array.createArr();
	Array.Output();

	int num = rand() % 100;
	cout << "\nSo lan xuat hien so " << num << ": " << Array.countX(num) << endl;

	cout << "Day co tang dan hay khong: " << boolalpha << Array.checkIncrease() << endl;

	int min = Array.findMinEven();

	if (min == NULL)
		cout << "Day khong co phan tu le !" << endl;
	else
		cout << "Phan tu le nho nhat trong day la: " << min << endl;

	int max = Array.findMaxElement();
	if (max == NULL)
		cout << "Day khong co so nguyen to !" << endl;
	else
		cout << "So nguyen to lon nhat trong day la: " << max << endl;

}

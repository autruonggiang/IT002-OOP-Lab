#include <iostream>
#include "PhanSo.h"

using namespace std;

int main()
{

	PhanSo a(1, 2);
	cout << "a = " << a << endl;
	PhanSo b(1, 3);
	cout << "b = " << b << endl;
	PhanSo c;
	c = a;
	cout << "c = " << c << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << a << c;
	if (a >= c) cout << "\nDUNG" << endl;
	else cout << "\nSAI" << endl;
	--a;
	cout << a;
	return 0;
}
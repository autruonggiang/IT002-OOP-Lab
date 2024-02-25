#include"SoPhuc.h"

int main()
{
	SoPhuc a(1, 2);
	cout << "a = " << a << endl;
	SoPhuc b(5, 3);
	cout << "b = " << b << endl;
	SoPhuc c;
	c = a;
	cout << "c = " << c << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	if (a == b) cout << "\n a = b: DUNG" << endl;
	else cout << "\na = b: SAI" << endl;
	return 0;

}

#include "DaThuc.h"


int main()
{
    srand(time(NULL));

    DaThuc a, b;

    a.Output();
    cout << endl;

    cout << "Nhap da thuc thu 1" << endl;
    a.Input();
    cout << "a = ";
    a.Output();
    cout << endl;

    int num;
    cout << "Gia tri cua x: ";
    cin >> num;
    cout << "a(" << num << ") = " << a.calcDT(num) << endl << endl;

    cout << "Nhap da thuc thu 2" << endl;
    b.Input();
    cout << "b = ";
    b.Output();
    cout << endl;

    cout << "a = ";
    a.Output();

    cout << "b = ";
    b.Output();

    cout << endl;
    cout << "a + b = ";
    a.sumDT(b).Output();
    cout << "a - b = ";
    a.subDT(b).Output();
}
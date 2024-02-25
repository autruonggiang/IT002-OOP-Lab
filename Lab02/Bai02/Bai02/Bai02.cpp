#include <iostream>
#include "PhanSo.h"

using namespace std;


void Solve(PS& a, PS& b) {
    cout << "Phan so a" << endl;
    a.Input();
    cout << "\nPhan so b" << endl;
    b.Input();

    cout << "\n____________________________" << endl;
    cout << "[PHAN SO THU DUOC]" << endl;

    cout << "Phan so a: ";
    a.Output();
    cout << endl;
    cout << "Phan so b: ";
    b.Output();
    cout << endl;

    cout << "\n[Dang so thap phan] " << endl;
    cout << "Phan so a: " << a.getTu() * 1.0 / a.getMau() << endl;
    cout << "Phan so b: " << b.getTu() * 1.0 / b.getMau() << endl;

    cout << "\n____________________________" << endl;
    PS c = a + b;
    cout << "Tong hai phan so la: ";
    c.Output();
    cout << endl;

    c = a - b;
    cout << "Hieu hai phan so la: ";
    c.Output();
    cout << endl;

    c = a * b;
    cout << "Tich hai phan so la: ";
    c.Output();
    cout << endl;

    c = a / b;
    cout << "Thuong hai phan so la: ";
    c.Output();
    cout << endl;
}


int main() {

    PS a, b;
    Solve(a, b);
    return 0;
}
#include "PhanSo.h"
#include<iostream>
#include<string>

using namespace std;

long long int UCLN(long long int m, long long int n) {

    long long int num;
    m = (m < 0) ? -m : m;
    n = (n < 0) ? -n : n;

    if (m < n) {
        num = n;
        n = m;
        m = num;
    }

    if (n == 0 || m == n)
        return m;
    return UCLN(n, m % n);
}

void PS::RutGon(PS& new_PS) {
    long long int num = UCLN(new_PS.tu, new_PS.mau);
    new_PS.tu = new_PS.tu / num;
    new_PS.mau = new_PS.mau / num;
}

bool CheckInt(float num) {
    int test = num;
    if (test == num)
        return true;

    return false;
}

void PS::Input() {

    do {
        cout << "Nhap tu so: ";
        cin >> tu;

        if (!CheckInt(tu)) {
            cout << "Tu so phai la so nguyen !" << endl;
        }

    } while (!CheckInt(tu));

    do {
        cout << "Nhap mau so: ";
        cin >> mau;

        if (!CheckInt(mau)) {
            cout << "Mau so phai la so nguyen !" << endl;
        }
        else if (mau == 0) {
            cout << "Mau so phai khac 0 !" << endl;
        }

    } while (!CheckInt(mau) || mau == 0);
}

void PS::Output() {
    if (mau == 1)
        cout << tu;
    else if (tu == 0)
        cout << "0";
    else if ((tu < 0 && mau < 0) || (tu > 0 && mau < 0))
        cout << -1 * tu << "/" << -1 * mau;
    else
        cout << tu << "/" << mau;
}


PS PS::Minus(PS PS2) {
    PS new_PS;
    new_PS.mau = mau * PS2.mau;
    new_PS.tu = tu * PS2.mau - PS2.tu * mau;
    RutGon(new_PS);

    return new_PS;
}

PS PS::Plus(PS PS2) {
    PS new_PS;
    new_PS.mau = mau * PS2.mau;
    new_PS.tu = tu * PS2.mau + PS2.tu * mau;

    RutGon(new_PS);

    return new_PS;
}

PS PS::Multiply(PS PS2) {
    PS new_PS;
    long long int numTu = UCLN(tu, PS2.mau);
    long long int numMau = UCLN(mau, PS2.tu);

    new_PS.mau = mau / numMau * PS2.mau / numTu;
    new_PS.tu = tu / numTu * PS2.tu / numMau;

    RutGon(new_PS);

    return new_PS;
}

PS PS::Devine(PS PS2) {
    PS new_PS;
    new_PS.mau = mau * PS2.tu;
    new_PS.tu = tu * PS2.mau;

    RutGon(new_PS);

    return new_PS;
}


PS PS::Multiply(long long int a) {
    PS new_PS;

    long long int numMau = UCLN(a, mau);

    new_PS.tu = tu * a / numMau;
    new_PS.mau = mau / numMau;

    RutGon(new_PS);

    return new_PS;
}

PS PS::Devine(long long int a) {
    PS new_PS;

    new_PS.tu = tu;
    new_PS.mau = mau * a;

    RutGon(new_PS);

    return new_PS;
}

PS PS::Plus(long long int a) {
    PS new_PS;

    new_PS.tu = tu + a;
    new_PS.mau = mau * a;

    RutGon(new_PS);

    return new_PS;
}

PS PS::Minus(long long int a) {
    PS new_PS;

    new_PS.tu = tu - a;
    new_PS.mau = mau * a;

    RutGon(new_PS);

    return new_PS;
}
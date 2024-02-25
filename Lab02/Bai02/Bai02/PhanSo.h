#pragma once
#include<iostream>
#include<string>

using namespace std;

long long int UCLN(long long int, long long int);
inline bool CheckInt(float);

class PS {

    long long int tu;
    long long int mau;

public:
    PS(long long int InputTu, long long int InputMau) : tu(InputTu), mau(InputMau) {}

    PS() {}

    PS(const PS& temp) {
        tu = temp.tu;
        mau = temp.mau;
    }

    ~PS() {}

    void RutGon(PS& new_PS);

    inline long long int const getTu() { return tu; }
    inline long long int const getMau() { return mau; }

    inline void setTu(long long int tu) { this->tu = tu; }
    inline void setMau(long long int mau) { this->mau = mau; }

    void Input();

    void Output();

    // For class PS
    PS Minus(PS);
    PS Plus(PS);
    PS Multiply(PS);
    PS Devine(PS);

    // For interger
    PS Multiply(long long int);
    PS Devine(long long int);
    PS Plus(long long int);
    PS Minus(long long int);

    PS operator + (PS PS2) {
        return Plus(PS2);
    }

    PS operator - (PS PS2) {
        return Minus(PS2);
    }

    PS operator * (PS PS2) {
        return Multiply(PS2);
    }

    PS operator / (PS PS2) {
        return Devine(PS2);
    }

    bool operator == (PS a) {
        if (tu == a.tu && mau == a.mau)
            return true;
        else
            return false;
    }

    bool operator != (PS a) {
        if (tu != a.tu || mau != a.mau)
            return true;
        else
            return false;
    }

    bool operator > (PS a) {
        PS b = Minus(a);
        if (b.tu <= 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return true;
            else
                return false;
        }

        return true;
    }

    bool operator >= (PS a) {
        PS b = Minus(a);
        if (b.tu < 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return true;
            else
                return false;
        }

        return true;
    }

    bool operator < (PS a) {
        PS b = Minus(a);
        if (b.tu < 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return false;
            else
                return true;
        }

        return false;
    }

    bool operator <= (PS a) {
        PS b = Minus(a);
        if (b.tu <= 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return false;
            else
                return true;
        }

        return false;
    }

    PS operator * (long long int a) {
        return Multiply(a);
    }

    PS operator / (long long int a) {
        return Devine(a);
    }

    PS operator + (long long int a) {
        return Plus(a);
    }

    PS operator - (long long int a) {
        return Minus(a);
    }

    bool operator == (long long int a) {
        if (tu / mau == a)
            return true;
        else
            return false;
    }

    bool operator != (long long int a) {
        if (tu / mau != a)
            return true;
        else
            return false;
    }

    bool operator > (long long int a) {
        PS b = Minus(a);
        if (b.tu <= 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return true;
            else
                return false;
        }

        return true;
    }

    bool operator >= (long long int a) {
        PS b = Minus(a);
        if (b.tu < 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return true;
            else
                return false;
        }

        return true;
    }

    bool operator < (long long int a) {
        PS b = Minus(a);
        if (b.tu < 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return false;
            else
                return true;
        }

        return false;
    }

    bool operator <= (long long int a) {
        PS b = Minus(a);
        if (b.tu <= 0 || b.mau < 0) {
            if (b.tu < 0 && b.mau < 0)
                return false;
            else
                return true;
        }

        return false;
    }

};
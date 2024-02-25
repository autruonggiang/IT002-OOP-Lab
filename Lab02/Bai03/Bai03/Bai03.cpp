#include <iostream>
#include "PhanSo.h"
#include "DSPhanSo.h"

using namespace std;


void Solve(DSPhanSo DS) 
{
    DS.Input();

    cout << "\n________________________________";
    DS.Output();

    cout << "\n________________________________";
    cout << "\n Phan so lon nhat: ";
    DS.findMax().Output();

    cout << "\n Phan so nho nhat: ";
    DS.findMin().Output();

    cout << "\n\n________________________________";
    cout << "\n[Sap xep theo chieu tang dan]";
    DS.sort(true);
    DS.Output();

    cout << "\n________________________________";
    cout << "\n[Sap xep theo chieu giam dan]";
    DS.sort(false);
    DS.Output();



}


int main() {

    DSPhanSo DS;
    Solve(DS);

    return 0;
}
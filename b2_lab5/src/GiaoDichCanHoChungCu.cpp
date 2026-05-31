#include "GiaoDichCanHoChungCu.h"
#include <iostream>
using namespace std;

void GiaoDichCanHoChungCu::Nhap(){
    GiaoDich::Nhap();
    cout<< "Ma can: "; cin>> macan;
    cout<< "Vi tri tang: "; cin>>vitri;
}

void GiaoDichCanHoChungCu::Xuat(){
    GiaoDich::Xuat();
    cout<< " | Ma can: " << macan << " | Vi tri tang: " << vitri <<endl;
}

long double GiaoDichCanHoChungCu::ThanhTien(){
    if(vitri == 1) return thanhtien = dientich*dongia*2;
    else if(vitri >=15) return thanhtien = dientich*dongia*1.2;
    else return thanhtien = dientich*dongia;
}

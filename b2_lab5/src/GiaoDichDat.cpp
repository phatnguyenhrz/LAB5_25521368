#include "GiaoDichDat.h"
#include <iostream>
using namespace std;

void GiaoDichDat::Nhap(){
     GiaoDich::Nhap();
     cout<< "Loai dat: "; cin>>loai;
}
void GiaoDichDat::Xuat(){
     GiaoDich::Xuat();
     cout<< " | Loai dat: " << loai << endl;
}

long double GiaoDichDat::ThanhTien(){
     if(loai== "A"){
       return thanhtien = dientich* dongia*1.5;
     }
     else return thanhtien = dientich*dongia;
}



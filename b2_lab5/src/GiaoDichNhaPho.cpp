#include "GiaoDichNhaPho.h"
#include <iostream>
using namespace std;

void GiaoDichNhaPho::Nhap(){
     GiaoDich::Nhap();

     cin.ignore();
     cout<< "Dia chi: ";
     getline(cin,diachi);
     cout<< "Loai nha: ";
     getline(cin,loai);
}
void GiaoDichNhaPho::Xuat(){
     GiaoDich::Xuat();
     cout<< " | Dia chi: " << diachi << " | Loai nha: " << loai <<endl;
}

long double GiaoDichNhaPho::ThanhTien(){
     if(loai== "cao cap"){
        return thanhtien = dientich*dongia;
     }
     else return thanhtien = dientich*dongia*0.9;
}

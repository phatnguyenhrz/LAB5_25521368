#include "GiaoDich.h"
#include <iostream>
using namespace std;
GiaoDich::GiaoDich()
{
    mgd = "";
    ngaygd = "";
    dongia = 0;
    dientich = 0;
    thanhtien = 0;
}

GiaoDich::~GiaoDich(){}

void GiaoDich::Nhap(){
     cout<< "Ma giao dich: "; cin>> mgd;
     cout<< "Ngay giao dich: "; cin>> ngaygd;
     cout<< "Don gia: " ; cin>> dongia;
     cout<< "Dien tich: "; cin>>dientich;
}

void GiaoDich::Xuat(){
     cout<< mgd << " | " << ngaygd << " | Don gia: " << dongia << " | S = " << dientich << " | Thanh tien: " << thanhtien;
}

string GiaoDich::getNgay(){
     return ngaygd;
}

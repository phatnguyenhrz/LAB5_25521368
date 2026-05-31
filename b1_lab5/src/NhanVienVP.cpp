#include "NhanVienVP.h"
#include <iostream>
using namespace std;

void NhanVienVP::Nhap(){
     NhanVien::Nhap();
     cout<< "So ngay lam viec: ";cin>> songay;
}

void NhanVienVP::Xuat(){
     NhanVien::Xuat();
     cout<< "So ngay lam viec: " << songay <<endl;
}

void NhanVienVP::TinhLuong(){
     luong = songay*100000;
}

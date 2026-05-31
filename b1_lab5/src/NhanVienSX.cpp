#include "NhanVienSX.h"
#include "NhanVien.h"
#include <iostream>
using namespace std;

void NhanVienSX::Nhap(){
     NhanVien::Nhap();
     cout<< "Luong co ban: ";cin>>luongcb;
     cout<< "So san pham: ";cin >> sp;
}

void NhanVienSX::Xuat(){
    NhanVien::Xuat();
    cout<< "Luong can ban: " << luongcb<<endl;
    cout<< "So san pham ban duoc: " << sp<<endl;
}

void NhanVienSX::TinhLuong(){
    luong = luongcb + sp*5000;
}

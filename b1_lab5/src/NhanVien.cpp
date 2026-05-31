#include "NhanVien.h"
#include <bits/stdc++.h>
using namespace std;

NhanVien::NhanVien(){
    hoten = "";
    ngaysinh = 0;
    thangsinh = 0;
    namsinh = 0;
    luong = 0;
}
NhanVien::~NhanVien(){}


void NhanVien::Nhap(){
     cout<< "Ho ten: " ; cin>> hoten;
     cout<< "Ngay sinh: "; cin>> ngaysinh;
     cout<< "Thang sinh: "; cin>>thangsinh;
     cout<< "Nam sinh: " ; cin>> namsinh;
}

void NhanVien::Xuat(){
     cout<< "Ho ten: " << hoten <<endl;
     cout<< "Ngay sinh: " << ngaysinh <<"/" <<thangsinh << "/" << namsinh<< endl;
     cout<< "Luong " <<luong <<endl;
}

long double NhanVien::getLuong(){
     return luong;
}

int NhanVien::getNgay(){
     return ngaysinh;
}

int NhanVien::getThang(){
     return thangsinh;

}
int NhanVien::getNam(){
    return namsinh;
}

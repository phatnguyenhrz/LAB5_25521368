#include "KhachHang.h"
using namespace std;
KhachHang::KhachHang()
{
    ten = "";
    soluong = 0;
    dongia = 0;
    tien = 0;
}

KhachHang::~KhachHang()
{
}

void KhachHang::Nhap(){
   cin.ignore();
   cout<< "Ho va ten khach hang: "; getline(cin,ten);
   cout<< "So luong san pham khach hang mua: "; cin>>soluong;
   cout<< "Don gia: "; cin>>dongia;
}

void KhachHang::Xuat(){
   cout<< "Ho ten: "<<ten <<endl;
}

long double KhachHang::getTien(){
    return tien;
}

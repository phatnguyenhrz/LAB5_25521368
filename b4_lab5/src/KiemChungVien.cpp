#include "KiemChungVien.h"
using namespace std;

void KiemChungVien::Nhap(){
    CNhanVien::Nhap();
    cout<< "So loi: "; cin>>loi;
}

void KiemChungVien::Xuat(){
    CNhanVien::Xuat();
    cout<< " | So loi: " <<loi <<endl;
}

double KiemChungVien::TinhLuong(){
    return luong = luongcb + loi*50000;
}
int KiemChungVien::getLoai(){
   return 2;
}

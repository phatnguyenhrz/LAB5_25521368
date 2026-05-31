#include "KHLoaiB.h"
using namespace std;

void KHLoaiB::Nhap(){
    KhachHang::Nhap();
    cout<< "So nam than thiet cua khach hang: "; cin>>nam;
}


void KHLoaiB::TinhTien(){
    long double km = min(nam*0.05,0.5);
    tien = (soluong*dongia)*(1 - km)*1.1;
    cout<< "So tien khach hang phai tra la " << tien <<endl;
}

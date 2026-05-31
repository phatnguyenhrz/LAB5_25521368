#include "CNhanVien.h"
using namespace std;

CNhanVien::CNhanVien()
{
    manv = "";
    hoten = "";
    tuoi = 0;
    sdt = "";
    email = "";
    luongcb = 0;
    luong = 0;
}

CNhanVien::~CNhanVien()
{
}

void CNhanVien::Nhap(){
     cin.ignore();
     cout<< "Ma Nhan Vien: "; getline(cin,manv);
     cout<< "Ho ten: "; getline(cin,hoten);
     cout<< "Tuoi: "; cin>>tuoi;
     cout<< "So dien thoai: "; cin>> sdt;
     cout<< "Email: "; cin>>email;
     cout<< "Luong co ban: "; cin>> luongcb;
}

void CNhanVien::Xuat(){
     cout<< "Ma NV: " << manv << " | " << hoten << " | Tuoi: " << tuoi << " | SDT: " << sdt << " | Email: " <<email << " | Luong can ban: " << luongcb << " | Luong: " << luong ;
}

int CNhanVien::getLoai(){
    return 0;
}


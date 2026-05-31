#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
    protected:
        string hoten;
        int ngaysinh,thangsinh, namsinh;
        long double luong;
    public:
        NhanVien();
        virtual ~NhanVien();
        virtual void Nhap();
        virtual void Xuat();
        virtual void TinhLuong() = 0;
        long double getLuong();
        int getNgay();
        int getThang();
        int getNam();
};

#endif // NHANVIEN_H

#ifndef KHACHHANG_H
#define KHACHHANG_H
#include <bits/stdc++.h>
using namespace std;
class KhachHang
{
    protected:
        string ten;
        int soluong;
        long double dongia;
        long double tien;
    public:
        KhachHang();
        ~KhachHang();
        virtual void Nhap();
        virtual void Xuat();
        virtual void TinhTien() = 0;
        long double getTien();
};

#endif // KHACHHANG_H

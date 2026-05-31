#ifndef CNHANVIEN_H
#define CNHANVIEN_H
#include <bits/stdc++.h>
using namespace std;

class CNhanVien
{
    protected:
        string manv;
        string hoten;
        int tuoi;
        string sdt;
        string email;
        double luongcb;
        double luong;
    public:
        CNhanVien();
        ~CNhanVien();
        virtual void Nhap();
        virtual void Xuat();
        virtual double TinhLuong() = 0;
        virtual int getLoai();

};

#endif // CNHANVIEN_H

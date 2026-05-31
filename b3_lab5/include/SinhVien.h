#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
    protected:
        string mssv;
        string hoten;
        string diachi;
        int tin;
        double dtb;
    public:
        SinhVien();
        virtual ~SinhVien();
        virtual void Nhap();
        virtual void Xuat();
        virtual bool TotNghiep() = 0;
        virtual int getLoai();
        virtual double getDTB();
};

#endif // SINHVIEN_H

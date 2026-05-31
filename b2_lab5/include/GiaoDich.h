#ifndef GIAODICH_H
#define GIAODICH_H
#include<bits/stdc++.h>
using namespace std;

class GiaoDich
{
    protected:
        string mgd;
        string ngaygd;
        long double dongia;
        double dientich;
        long double thanhtien;
    public:
        GiaoDich();
        virtual ~GiaoDich();
        virtual void Nhap();
        virtual void Xuat();
        virtual long double ThanhTien() = 0;
        string getNgay();
};

#endif // GIAODICH_H

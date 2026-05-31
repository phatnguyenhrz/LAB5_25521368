#ifndef GIAODICHNHAPHO_H
#define GIAODICHNHAPHO_H
#include "GiaoDich.h"

class GiaoDichNhaPho : public GiaoDich
{
    private:
        string diachi;
        string loai;
    public:
        void Nhap();
        void Xuat();
        long double ThanhTien();
};

#endif // GIAODICHNHAPHO_H

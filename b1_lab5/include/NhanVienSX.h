#ifndef NHANVIENSX_H
#define NHANVIENSX_H
#include "NhanVien.h"


class NhanVienSX : public NhanVien
{
    private:
        long double luongcb;
        int sp;
    public:
        void Nhap();
        void Xuat();
        void TinhLuong();
};

#endif // NHANVIENSX_H

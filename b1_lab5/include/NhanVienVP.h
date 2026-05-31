#ifndef NHANVIENVP_H
#define NHANVIENVP_H
#include "NhanVien.h"


class NhanVienVP : public NhanVien
{
    private:
        int songay;
    public:
        void Nhap();
        void Xuat();
        void TinhLuong();
};

#endif // NHANVIENVP_H

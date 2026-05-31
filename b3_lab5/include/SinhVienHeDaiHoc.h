#ifndef SINHVIENHEDAIHOC_H
#define SINHVIENHEDAIHOC_H
#include "SinhVien.h"

class SinhVienHeDaiHoc : public SinhVien
{
    private:
        string tenlv;
        double diemlv;
    public:
        void Nhap();
        void Xuat();
        bool TotNghiep();
        int getLoai();
        double getDTB();
};

#endif // SINHVIENHEDAIHOC_H

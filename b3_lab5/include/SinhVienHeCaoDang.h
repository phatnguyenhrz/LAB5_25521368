#ifndef SINHVIENHECAODANG_H
#define SINHVIENHECAODANG_H
#include "SinhVien.h"


class SinhVienHeCaoDang : public SinhVien
{
    private:
        double dtn;
    public:
        void Nhap();
        void Xuat();
        bool TotNghiep();
        int getLoai();
        double getDTB();
};

#endif // SINHVIENHECAODANG_H

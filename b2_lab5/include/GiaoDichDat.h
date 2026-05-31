#ifndef GIAODICHDAT_H
#define GIAODICHDAT_H
#include "GiaoDich.h"

class GiaoDichDat : public GiaoDich
{
    private:
        string loai;
    public:
        void Nhap();
        void Xuat();
        long double ThanhTien();
};

#endif // GIAODICHDAT_H

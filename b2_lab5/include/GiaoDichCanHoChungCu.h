#ifndef GIAODICHCANHOCHUNGCU_H
#define GIAODICHCANHOCHUNGCU_H
#include "GiaoDich.h"

class GiaoDichCanHoChungCu : public GiaoDich
{
    private:
        string macan;
        int vitri;
    public:
        void Nhap();
        void Xuat();
        long double ThanhTien();
};

#endif // GIAODICHCANHOCHUNGCU_H

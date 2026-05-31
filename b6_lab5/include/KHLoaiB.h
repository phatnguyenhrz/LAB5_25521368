#ifndef KHLOAIB_H
#define KHLOAIB_H
#include "KhachHang.h"
using namespace std;

class KHLoaiB : public KhachHang
{
    private:
        int nam;
    public:
        void Nhap();
        void TinhTien();
};

#endif // KHLOAIB_H

#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H
#include "CNhanVien.h"
using namespace std;

class LapTrinhVien : public CNhanVien
{
    private:
        int gio;
    public:
        void Nhap();
        void Xuat();
        double TinhLuong();
        int getLoai();
};

#endif // LAPTRINHVIEN_H

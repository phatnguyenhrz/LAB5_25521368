#ifndef KIEMCHUNGVIEN_H
#define KIEMCHUNGVIEN_H
#include "CNhanVien.h"
using namespace std;

class KiemChungVien : public CNhanVien
{
    private:
        int loi;
    public:
        void Nhap();
        void Xuat();
        double TinhLuong();
        int getLoai();
};

#endif // KIEMCHUNGVIEN_H

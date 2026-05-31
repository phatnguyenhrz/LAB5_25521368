#include "LapTrinhVien.h"
using namespace std;

void LapTrinhVien::Nhap(){
        CNhanVien::Nhap();
        cout<< "So gio overtime: "; cin>> gio;
}
void LapTrinhVien::Xuat(){
        CNhanVien::Xuat();
        cout<< " | So gio overtime: " << gio <<endl;
}

double LapTrinhVien::TinhLuong(){
    return luong = luongcb + gio*200000;
}
int LapTrinhVien::getLoai(){
   return 1;
}

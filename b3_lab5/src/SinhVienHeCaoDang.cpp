#include "SinhVienHeCaoDang.h"
using namespace std;

void SinhVienHeCaoDang::Nhap(){
    SinhVien::Nhap();
    cout<< "Nhap diem tot nghiep: "; cin>> dtn;
}

void SinhVienHeCaoDang::Xuat(){
   SinhVien::Xuat();
   cout<< " | DTN: " <<dtn<<endl;
}

bool SinhVienHeCaoDang::TotNghiep(){
    if(tin>=120 && dtb >= 5 && dtn>= 5 ) return true;
    return false;
}

int SinhVienHeCaoDang::getLoai(){
    return 1;
}

double SinhVienHeCaoDang::getDTB(){
    return dtb;
}

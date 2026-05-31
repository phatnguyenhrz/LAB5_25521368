#include "SinhVienHeDaiHoc.h"
using namespace std;

 void SinhVienHeDaiHoc::Nhap(){
      SinhVien::Nhap();
      cin.ignore();
      cout<< "Nhap ten luan van: "; getline(cin,tenlv);
      cout<< "Nhap diem luan van: "; cin>>diemlv;
}

void SinhVienHeDaiHoc::Xuat(){
     SinhVien::Xuat();
     cout<< " | Ten luan van: " << tenlv << " | Diem luan van: " << diemlv <<endl;
}

bool SinhVienHeDaiHoc::TotNghiep(){
     if(tin>=170 && dtb>=5 && diemlv>=5) return true;
     return false;
}
int SinhVienHeDaiHoc::getLoai(){
     return 2;
}
double SinhVienHeDaiHoc::getDTB(){
     return dtb;
}

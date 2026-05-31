#include "SinhVien.h"
using namespace std;
SinhVien::SinhVien()
{
    mssv = "";
    hoten = "";
    diachi = "";
    tin = 0;
    dtb = 0;
}

SinhVien::~SinhVien()
{

}

void SinhVien::Nhap(){
     cout<< "Nhap MSSV: "; cin>>mssv;
     cin.ignore();
     cout<< "Ho ten: ";  getline(cin,hoten);
     cout<< "Dia chi: " ; getline(cin,diachi);
     cout<< "So tin chi: "; cin>> tin;
     cout<< "DTB: "; cin>>dtb;
}
void SinhVien::Xuat(){
     cout<<mssv << " | " << hoten << " | " <<diachi << " | So tin chi: " <<tin<< " | DTB: " <<dtb;
}

int SinhVien::getLoai(){
    return 0;
}
double SinhVien::getDTB(){
    return 0;
}

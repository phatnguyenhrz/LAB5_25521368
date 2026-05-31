#include "SinhVienHeCaoDang.h"
#include "SinhVienHeDaiHoc.h"

using namespace std;

int main()
{
    SinhVien* ds[300];
    int sl = 0;
    int n;
    int cnt1=0  ,cnt2=0;
    cout<< "Nhap so sinh vien: "; cin>>n;
    int loai;
    for(int i=0;i<n;i++){
         cin>>loai;
         SinhVien* p;
         if(loai==1){
             p = new SinhVienHeCaoDang();
         }
         else if(loai==2) p = new SinhVienHeDaiHoc();
        p->Nhap();
        ds[sl++] = p;
    }
    cout<< "\nDANH SACH SINH VIEN:\n";
    for(int i = 0; i<sl;i++){
        cout<< "Sinh vien thu " << i + 1 << endl;
        ds[i]->Xuat();
    }
    int f = 0;
    cout<< "\nDANH SACH SINH VIEN TOT NGHIEP:\n";
    for(int i=0; i<sl;i++){
        if(ds[i]->TotNghiep()){
            ds[i]->Xuat();
            f=1;
        }
    }
    if(f==0) cout<< 0 <<endl;
    f=0;
    cout<< "\nDANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP:\n";
    for(int i=0; i<sl;i++){
        if(!ds[i]->TotNghiep()){
            ds[i]->Xuat();
            f=1;
        }
    }
    if(f==0) cout<< 0 <<endl;
    SinhVienHeDaiHoc* dh = NULL;
    for(int i=0; i<sl;i++){
            SinhVienHeDaiHoc* temp = dynamic_cast<SinhVienHeDaiHoc*>(ds[i]);
        if(temp != NULL && (dh == NULL || dh->getDTB() < temp->getDTB())){
            dh = temp;
        }
    }
    if(dh==NULL) cout<< "\nKHONG CO SINH VIEN DAI HOC!\n";
    else {
        cout<< "\nSinh vien dai hoc co DTB cao nhat:\n";
        dh->Xuat();
    }

    SinhVienHeCaoDang* cd = NULL;
    for(int i=0;i<sl;i++){
        SinhVienHeCaoDang* temp = dynamic_cast<SinhVienHeCaoDang*>(ds[i]);
        if(temp != NULL && (cd == NULL || cd->getDTB() < temp->getDTB())){
            cd = temp;
        }
    }
    if(cd==NULL) cout<< "\nKHONG CO SINH VIEN CAO DANG!\n";
    else{
        cout<< "Sinh vien cao dang co DTB cao nhat:\n";
        cd->Xuat();
    }

    for(int i=0;i<sl;i++){
        if(!ds[i]->TotNghiep()){
            if(ds[i]->getLoai()==1) cnt1++;
            else if(ds[i]->getLoai()==2) cnt2++;
            f=1;
        }
    }
    cout<< "\nSo sinh vien cao dang khong du dieu kien tot nghiep: " << cnt1 <<endl;
    cout<< "So sinh vien dai hoc khong du dieu kien tot nghiep: " << cnt2 <<endl;
    for(int i=0; i<sl;i++){
        delete ds[i];
    }
    return 0;
}

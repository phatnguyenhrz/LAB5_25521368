#include "NhanVienSX.h"
#include "NhanVienVP.h"

using namespace std;

int main()
{
    NhanVien *ds[300];
    int sl = 0;
    int n1;
    cout<< "Nhap so luong nhan vien van phong: "; cin>>n1;
    for(int i = 0; i<n1;i++){
        ds[sl] = new NhanVienVP();
        ds[sl]->Nhap();
        ds[sl]->TinhLuong();
        sl++;
    }
    int n2;
    cout<< "Nhap so luong nhan vien san xuat: "; cin>>n2;
    for(int i = 0; i<n2;i++){
        ds[sl] = new NhanVienSX();
        ds[sl]->Nhap();
        ds[sl]->TinhLuong();
        sl++;
    }
    cout<< "\n DANH SACH NHAN VIEN\n";
    for(int i=0; i<sl;i++){
        ds[i]->Xuat();
        cout<< "\n";
    }
    long double tongluong = 0;
    for(int i=0;i<sl;i++){
        tongluong+= ds[i]->getLuong();
    }
    cout<< "Tong luong ma cong ty phai tra cho nhan vien: " << tongluong <<endl;

    NhanVienSX* minn = NULL;

    for(int i = 0; i < sl; i++){
        NhanVienSX* sx = dynamic_cast<NhanVienSX*>(ds[i]);
        if(sx != NULL)
        {
            if(minn == NULL || sx->getLuong() < minn->getLuong())
            {
                minn = sx;
            }
        }
    }

    if(minn == NULL)
        cout << "\nKHONG CO NHAN VIEN SAN XUAT\n";
    else
    {
        cout << "\nNhan vien san xuat co luong thap nhat:\n";
        minn->Xuat();
    }


    NhanVienVP* maxx = NULL;
    for(int i=0;i<sl;i++){
        NhanVienVP* vp = dynamic_cast<NhanVienVP*>(ds[i]);
        if(vp!=NULL){
            if(maxx==NULL || vp->getNam() < maxx->getNam()){
                maxx = vp;
            }
            else if(vp->getNam() == maxx->getNam() && vp->getThang() < maxx->getThang() ) maxx = vp;
            else if(vp->getNam() == maxx->getNam() && vp->getThang() == maxx->getThang() && vp->getNgay() < maxx->getNgay()) maxx = vp;
        }
    }
    if(maxx==NULL) cout<< "\nKHONG CO NHAN VIEN VAN PHONG\n";
    else {
        cout<< "\nNhan vien van phong lon tuoi nhat la:\n";
        maxx->Xuat();
    }
    for(int i=0;i<sl;i++){
        delete ds[i];
    }

    return 0;

}

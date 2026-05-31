#include "LapTrinhVien.h"
#include "KiemChungVien.h"
using namespace std;

int main()
{
    CNhanVien* ds[300];
    int sl = 0;
    int n;
    cout<< "So nhan vien: "; cin>>n;
    for(int i=0;i<n;i++){
        CNhanVien* p;
        int loai;
        cout<< "Nhap loai (1 la LTV, 2 la KCV): \n";
        cin>>loai;
        if(loai==1){
            p = new LapTrinhVien();
        }
        else if(loai==2){
            p = new KiemChungVien();
        }
        p->Nhap();
        p->TinhLuong();
        ds[sl++] = p;
    }
    double tb = 0;
    for(int i=0;i<sl;i++){
        cout<< "Nhan vien thu " << i + 1 <<endl;
        ds[i]->Xuat();
        tb+= ds[i]->TinhLuong();
    }
    tb = (double)tb/sl;

    cout<< "\nDANH SACH CAC NHAN VIEN CO LUONG THAP HON MUC LUONG TRUNG BINH\n";
    for(int i=0;i<sl;i++){
        if(ds[i]->TinhLuong() < tb) ds[i]->Xuat();
    }
    CNhanVien* m = ds[0];
    for(int i=1;i<sl;i++){
        if(m->TinhLuong() < ds[i]->TinhLuong()) m = ds[i];
    }
    cout<< "\nNhan vien co luong cao nhat:\n";
    m->Xuat();
    m = ds[0];
    for(int i=1;i<sl;i++){
        if(m->TinhLuong() > ds[i]->TinhLuong()) m = ds[i];
    }
    cout<< "Nhan vien co luong thap nhat:\n";
    m->Xuat();

    LapTrinhVien* ltv = NULL;
    for(int i=0;i<sl;i++){
        LapTrinhVien* temp = dynamic_cast<LapTrinhVien*>(ds[i]);
        if(temp != NULL && (ltv==NULL || temp->TinhLuong() > ltv->TinhLuong())) ltv = temp;
    }
    if(ltv==NULL) cout << "\nKHONG CO LAP TRINH VIEN!\n";
    else {
        cout<< "\nLap trinh vien co luong cao nhat la:\n";
        ltv->Xuat();
    }

    KiemChungVien* kcv = NULL;
    for(int i=0;i<sl;i++){
        KiemChungVien* temp = dynamic_cast<KiemChungVien*>(ds[i]);
        if(temp != NULL && (kcv==NULL || kcv->TinhLuong() > temp->TinhLuong())) kcv = temp;
    }
    if(kcv==NULL) cout<< "\nKHONG CO KIEM CHUNG VIEN!\n";
    else{
        cout<< "\nKiem chung vien co luong thap nhat la:\n";
        kcv->Xuat();
    }
    for(int i=0;i<sl;i++){
        delete ds[i];
    }
    return 0;

}

#include "KHLoaiA.h"
#include "KHLoaiB.h"
#include "KHLoaiC.h"

using namespace std;

int main()
{
    KhachHang* ds[1000];
    int sl = 0;
    int n;
    cout<< "So luong khach hang loai A: "; cin>>n;

    for(int i=0;i<n;i++){
        cout<< "Khach hang loai A thu " << i + 1 << endl;
        KhachHang* p = new KHLoaiA();
        p->Nhap();
        ds[sl++] = p;
    }
    cout<< "\nSo luong khach hang loai B: "; cin>>n;

    for(int i=0;i<n;i++){
        cout<< "Khach hang loai B thu " << i+1<<endl;
        KhachHang* p = new KHLoaiB();
        p->Nhap();
        ds[sl++] = p;
    }
    cout<< "\nSo luong khach hang loai C: "; cin>>n;

    for(int i=0;i<n;i++){
        cout<< "Khach hang loai C thu " <<i+1<<endl;
        KhachHang* p = new KHLoaiC();
        p->Nhap();
        ds[sl++] = p;
    }

    cout<< "\nDANH SACH KHACH HANG\n";
    long double sum = 0;
    for(int i=0;i<sl;i++){
        ds[i]->Xuat();
        ds[i]->TinhTien();
        sum+= ds[i]->getTien();
    }

    cout<< "\nTong so tien cong ty thu duoc la " <<sum;
    for(int i=0;i<sl;i++){
        delete ds[i];
    }
    return 0;
}

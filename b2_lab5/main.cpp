#include "GiaoDichDat.h"
#include "GiaoDichCanHoChungCu.h"
#include "GiaoDichNhaPho.h"

using namespace std;

int main()
{
    GiaoDich* ds[300];
    int sl = 0;
    int n1;
    cout<< "Nhap cac giao dich dat: "; cin>> n1;
    for(int i=0;i<n1;i++){
        ds[sl] = new GiaoDichDat();
        ds[sl]->Nhap();
        ds[sl]->ThanhTien();
        sl++;
    }
    int n2;
    cout<< "Nhap cac giao dich nha pho: "; cin>> n2;
    for(int i=0;i<n2;i++){
        ds[sl] = new GiaoDichNhaPho();
        ds[sl]->Nhap();
        ds[sl]->ThanhTien();
        sl++;
    }
    int n3;
    cout<< "Nhap cac giao dich can ho chung cu: "; cin>> n3;
    for(int i=0;i<n3;i++){
        ds[sl] = new GiaoDichCanHoChungCu();
        ds[sl]->Nhap();
        ds[sl]->ThanhTien();
        sl++;
    }
    int demd = 0;
    int demnp = 0;
    int demchcc = 0;

    for(int i =0; i<sl;i++){
        if(dynamic_cast<GiaoDichDat*>(ds[i])) demd++;
        else if(dynamic_cast<GiaoDichNhaPho*>(ds[i])) demnp++;
        else if(dynamic_cast<GiaoDichCanHoChungCu*>(ds[i])) demchcc++;
    }
    cout<< "\nGiao dich dat: " << demd <<endl;
    cout<< "Giao dich nha pho: " << demnp <<endl;
    cout<< "Giao dich can ho chung cu: " << demchcc <<endl;

    long double sum = 0;
    int cnt=0;
    for(int i=0;i<sl;i++){
        GiaoDichCanHoChungCu* cc = dynamic_cast<GiaoDichCanHoChungCu*>(ds[i]);
        if(cc!=NULL){
            sum+= cc->ThanhTien();
            cnt++;
        }
    }

    if(cnt == 0) cout<< "\nKHONG CO CAN HO CHUNG CU NAO CA!\n";
    else cout<< "Trung binh thanh tien cua can ho chung cu: " << (long double)sum/cnt <<endl;

    GiaoDichNhaPho* maxx = NULL;
    for(int i=0;i<sl;i++){
        GiaoDichNhaPho* np = dynamic_cast<GiaoDichNhaPho*>(ds[i]);
        if(np!=NULL){
            if(maxx==NULL || maxx->ThanhTien() < np->ThanhTien()) maxx = np;
        }
    }
    if(maxx == NULL)
{
    cout << "\nKHONG CO GIAO DICH NHA PHO\n";
}
else
{
    cout << "Giao dich nha pho co gia tri cao nhat:\n";
    maxx->Xuat();
}

    cout << "\n\nGiao dich thang 12/2024:\n";

    for(int i = 0; i < sl; i++)
    {
        if(ds[i]->getNgay().find("/12/2024") != string::npos)
        {
            ds[i]->Xuat();
        }
    }

    for(int i=0;i<sl;i++){
        delete ds[i];
    }

    return 0;
}


#include "KHLoaiA.h"
#include <iostream>
using namespace std;

void KHLoaiA::TinhTien(){
    tien = ((long double)soluong*dongia)*1.1;
    cout<< "So tien khach hang phai tra la " << tien <<endl;
}

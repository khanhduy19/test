#pragma once
#include "Canbo.h"
#include "Giangvien.h"
using namespace std;

class NhanVienHanhChinh: public Canbo
{
private:
    string Phongban, Chucvu;
    unsigned int songaycong;
public:
    virtual void Nhap();
    virtual void Xuat(ostream& os);
    unsigned int Tinhluong();
    NhanVienHanhChinh(/* args */);
};


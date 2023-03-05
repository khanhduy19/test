#pragma once
#include "Canbo.h"

class Giangvien: public Canbo
{
private:
  string Khoa;
  string Trinhdo;
  unsigned int Sotietday; 
public: 
    virtual void Nhap();
    virtual void Xuat();
    unsigned int Tinhluong();
    Giangvien(/* args */);

};


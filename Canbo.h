#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Canbo
{
protected:
    string Hoten;
    unsigned int Phucap;
    unsigned short Hesoluong;
public:
    virtual void Nhap();
    virtual void Xuat(ostream& os);
    virtual unsigned int Tinhluong() = 0;

    Canbo(/* args */);
 
};

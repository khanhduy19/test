#include "Canbo.h"

Canbo::Canbo(/* args */)
{
    Hoten = "chua co";
    Hesoluong = 0;
}

void Canbo::Nhap()
{
    fflush(stdin);
    cout << "nhap ho ten /n";
    getline(cin,this->Hoten);
    cout << "nhap he so luong";
    cin >> this->Hesoluong;
}

void Canbo::Xuat(ostream& os)
{
    os << "ho ten" << this->Hoten << "he so luong: "<<this->Hesoluong;
}
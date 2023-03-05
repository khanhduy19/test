#include "NhanVienHanhChinh.h"gti
 
NhanVienHanhChinh::NhanVienHanhChinh(/* args */)
{
    songaycong = 0;
    Phongban = "chua co";
    Chucvu = " chua co";
}
void NhanVienHanhChinh::Nhap()
{
    Canbo::Nhap();
    fflush(stdin);
    cout << "nhap ten Phong :";
    getline(cin,this->Phongban);
    cout << "chon phong ban :";
    int chon;
    do
    {
       cout << "1 Truong phong\n";
       cout << "2 Pho phong\n";
       cout << "3 Nhan vien\n";
       cin >> chon;
       switch (chon)
       {
       case 1: Chucvu = "Cu Nhan"; this->Phucap =2000; break;
       case 2: Chucvu = "Pho phong"; this->Phucap =1000; break;
       case 3: Chucvu = "Nhan vien"; this->Phucap =500; break; 
 
       
       default: cout<< "ban da chon sai ";system("pause");
        break;
       }
    } while (chon < 1 || chon > 3);
    cout << "nhap so ngay cong :";
    cin >> this->songaycong;
}
void NhanVienHanhChinh::Xuat(ostream& os)
{
    Canbo::Xuat();
    os << "phong ban :" << this->Phongban << "chuc vu :" << this->Chucvu << "so ngay cong" << this->songaycong <<endl;

}
unsigned int NhanVienHanhChinh::Tinhluong()
{
    return this->Hesoluong * 730 + this->Phucap + this->songaycong *200;

}

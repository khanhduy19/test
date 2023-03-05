#include "Giangvien.h"

Giangvien::Giangvien(/* args */)
{
    Sotietday = 0;
    Khoa = "CNTT";
    Trinhdo = "Cunhan";   
}
void Giangvien::Nhap()
{
    Canbo::Nhap();
    fflush(stdin);
    cout << "nhap ten Khoa :";
    getline(cin,this->Khoa);
    cout << "con trinh do :";
    int chon;
    do
    {
       cout << "1 Cu Nhan\n";
       cout << "2 Thac Si\n";
       cout << "3 Tien Si\n";
       cin >> chon;
       switch (chon)
       {
       case 1: Trinhdo = "Cu Nhan"; this->Phucap =300; break;
       case 2: Trinhdo = "Thac Si"; this->Phucap =500; break;
       case 3: Trinhdo = "Tien Si"; this->Phucap =1000; break; /* constant-expression */
        /* code */

       
       default: cout<< "ban da chon sai ";system("pause");
        break;
       }
    } while (chon < 1 || chon > 3);
    cout << "nhap so tiet day :";
    cin >> this->Sotietday;
}
void Giangvien::Xuat(ostream& os)
{
    Canbo::Xuat();
    os << "ten Khoa : "<< this->Khoa << "trinh do :" <<this->Trinhdo<<"so tiet day :"<< this->Sotietday<<endl;

}
unsigned int Giangvien::Tinhluong()
{
    return this->Hesoluong * 730 + this->Phucap + this->Sotietday *45;

}
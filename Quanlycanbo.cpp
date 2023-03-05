#include "Quanlycanbo.h"
void Quanlycanbo::Nhapdanhsach()
{
    Canbo* canbo;
    int chon;
    do
    {
        system("cls");
        cout<< "1. Nhap giang vien\n";
        cout<< "2. Nhap nhan vien hanh chinh\n";
        cout<< "3. Nhap tro ve\n";
        cin>> chon;
        switch (chon)
        {
        case 1:canbo = new Giangvien(); canbo->Nhap; break;
        case 2:canbo = new NhanVienHanhChinh(); canbo->Nhap; break;
    
            break;
        
        default:
            break;
        }
    } while (/* condition */);
    
}
void Quanlycanbo::Indanhsach(ostream& os)
{
    Canbo::Xuat();
    for (int i = 0; i < dsCanbo.size ; i++)
    {
        dsCanbo[i]->Xuat(os);
    }
    
}
unsigned int Quanlycanbo::Tinhtongluong()
{
    unsigned Tong = 0;
    for (int i = 0; i < dsCanbo.size ; i++)
    {
        Tong += dsCanbo[i]->Tinhluong;
    }
}
void Quanlycanbo::Timcanboluongcao()
{
    ofstream Outfile;
    Outfile.open("canboluongcaonhat.txt");
    Canbo* canboluongcao = NULL;
        for (int i = 0; i < dsCanbo.size ; i++)
    {
       if (typeid(*dsCanbo[i]).name() == "class GiangVien")
       {
        if (canboluongcao == NULL)
        {
            canboluongcao = dsCanbo[i];
        }
        else
        {
            if (dsCanbo[i]->Tinhluong() > canboluongcao->Tinhluong())
            {
                canboluongcao = dsCanbo[i];
            } 
        }
        
        
       }
       
    }
    for (int i = 0; i < dsCanbo.size(); i++)
    {
        if(dsCanbo[i]->Tinhluong() == canboluongcao)
        {
            dsCanbo[i]->Xuat(Outfile);
        }
    }
    Outfile.close();
    
}
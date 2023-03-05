#include "Canbo.h"
#include "Giangvien.h"
#include "NhanVienHanhChinh.h"
#include "Quanlycanbo.h"





int main()
{
    Quanlycanbo* QLCB;
    int chon;
    do
    {
        system("cls");
        cout << "0. thoat\n";
        cout << "1. nhap danh sach\n";
        cout << "2. in danh sach ra man hinh\n";
        cout << "3. in danh sach ra file\n";
        cout << "4. tinh tong luong\n";
        cout << "5. tim giang vien luong cao nhat\n";
        cin >> chon;
        switch (chon)
        {
        case 1: QLCB.Nhapdanhsach(); break;
        case 2: QLCB.Indanhsach(cout); system("pause"); break;
        case 3:  {
                    ofstream Outfile;
                    Outfile.open("danhsach.txt");
                    QLCB.Indanhsach(Outfile);
                    Outfile.close(); break;
        }
        case 4: 
        {
                    unsigned Tongluong = QLCB.Tinhtongluong();
                    cout << "tong luong =" << Tongluong <<endl;
        }
        case 5: 
        {
                    QLCB.Timcanboluongcao(); break;

        }
        
        default: cout << " chon sai roi chon lai di"; system("pause");
            break;
        }
    } while (chon!=0);
    return 0;
    
}
#include "Canbo.h"
#include "Giangvien.h"
#include "NhanVienHanhChinh.h"
#include <vector>

class Quanlycanbo: public Canbo
{
private:
    vector<Canbo*> dsCanbo;
public:
 void Nhapdanhsach();
 void Indanhsach(ostream& os);
 unsigned int Tinhtongluong();
 void Timcanboluongcao(); 
};


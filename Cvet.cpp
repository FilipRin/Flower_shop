#include "Cvet.h"

Cvet::Cvet(std::string nazivp, double celNabCenap, double celProdCenap)
{
    naziv = nazivp;
    celNabCena = celNabCenap;
    celProdCena = celProdCenap;
}

bool Cvet::operator==(Cvet& c1)
{
    if (c1.naziv == naziv)
        return true;
    return false;
}

std::ostream& operator<<(std::ostream& it, Cvet& c)
{
    std::cout << c.naziv << std::endl;
    return it;
}
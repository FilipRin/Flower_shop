#include "Buket.h"
Buket::Buket()
{
}

void Buket::dodajCvet(Cvet& c)
{
    Cvetovi.push_back(c);
    celNabCena += c.getNabCena();
    celProdCena += c.getProdCena();
}

bool operator>(Buket& b1, Buket& b2)
{
    if ((b1.celProdCena) > (b2.celProdCena))
    {
        cout << "Prvi buket je veci";
        return true;
    }
    else if ((b1.celProdCena) < (b2.celProdCena))
    {
        cout << "Prvi buket je manji" << endl;
        return false;
    }
    else
    {
        cout << "Jednaki su" << endl;
        return true;
    }
}

std::ostream& operator<<(std::ostream& it, Buket& b)
{
    int br = 0, j;
    //int pom[10];

    cout << "( ";
    //for (Cvet n : b.Cvetovi) { std::cout << n << ", "; }
    for (int i = 0; i < b.Cvetovi.size(); i++)
    {
        j = i + 1;
        while (j < b.Cvetovi.size()) {
            if (b.Cvetovi[i].getNaziv() == b.Cvetovi[j].getNaziv()) {
                //br++;
                break;
            }
            else { 
                j++;
                if (j == b.Cvetovi.size()) {
                    cout << b.Cvetovi[i].getNaziv();
                    if (i != b.Cvetovi.size() - 1) {
                        cout << ", ";
                    }
                }
            }
            //cout << b.Cvetovi[i].getNaziv();
        }
        if (i == b.Cvetovi.size() - 1) {
            cout << b.Cvetovi[i].getNaziv();
        }
        
        
    }
    cout << " ) " << b.celProdCena << "RSD";
   /* for (int i = 0; i < b.Cvetovi.size(); i++)
    {
        if (i == b.Cvetovi.size() - 1)
            cout << b.Cvetovi[i].getNaziv();
        else
        {
            cout << b.Cvetovi[i].getNaziv() << ", ";
        }
    }
    cout << " ) " << b.celProdCena << "RSD";*/
    return it;
}
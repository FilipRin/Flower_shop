#include "Cvecara.h"

Cvecara::Cvecara()
{
}

void Cvecara::dodajBuket(Buket& c)
{
    if (c.getCelProdCena() / c.getCelNabCena() >= 1.2 && zarada-c.getCelNabCena()>0) {
    Buketi.push_back(c);
    zarada = zarada - c.getCelNabCena();
    }
    else if (zarada - c.getCelNabCena() <= 0) {
        cout << "Ovaj buket ne moze se dodati jer cvecara nema dovoljno para!" << endl;
    }
    else {
        cout << "Ovaj buket ne moze se dodati jer mu je procenat prodaje manji od 20%!"<<endl;
    }
}

void Cvecara::prodajBuket()
{
    int x,broj;
    x = Buketi.size();
    while (1) {
        cout << "Sa koje pozicije zelite obrisati cvet od 0 do " << x - 1 << endl;
        cin >> broj;
        if (broj >= 0 && broj <= x - 1) {
            break;
        }
        else {
            cout << "Uneli ste pogresno, pokusajte ponovo!" << endl;
        }
    }
    zarada = zarada + Buketi[broj].getCelProdCena();
    Buketi.erase(Buketi.begin() + broj);
    /*for (int i = broj; i < x; i++)
    {
        
    }*/
    

}

std::ostream& operator<<(std::ostream& it, Cvecara& c)
{
    // TODO: insert return statement here
    cout << "Zarada = " << c.zarada << "RSD" << endl;
    for (int i = 0; i < c.Buketi.size(); i++) {
        cout << c.Buketi[i] << endl;
    }
    return it;
}

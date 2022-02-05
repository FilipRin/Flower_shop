#include "Cvet.h"
#include <vector>

#ifndef _BUKET_H_
#define _BUKET_H_

class Buket
{
    Cvet* niz = nullptr;
    vector<Cvet> Cvetovi;
    int br = 0;
    double celNabCena = 0;
    double celProdCena = 0;

public:
    Buket();
    void dodajCvet(Cvet& c);
    const double& izracunajZaradu() const { return celProdCena - celNabCena; }
    friend bool operator>(Buket& b1, Buket& b2);
    friend std::ostream& operator<<(std::ostream& it, Buket& b);
    const double& getCelNabCena() const { return celNabCena; }
    const double& getCelProdCena() const { return celProdCena; }
};

#endif // !_BUKET_H_#pragma once

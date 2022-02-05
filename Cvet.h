#pragma once
#include <iostream>
using namespace std;

#ifndef _CVET_H_
#define _CVET_H_

class Cvet
{
    std::string naziv;
    double celNabCena;
    double celProdCena;

public:
    double IzracunajZaradu() { return celProdCena - celNabCena; }
    Cvet(std::string nazivp, double celNabCenap, double celProdCenap);
    bool operator==(Cvet& c1);
    friend std::ostream& operator<<(std::ostream& it, Cvet& c);
    const std::string& getNaziv() const { return naziv; }
    const double& getNabCena() const { return celNabCena; }
    const double& getProdCena() const { return celProdCena; }
};

#endif // !_CVET_H_
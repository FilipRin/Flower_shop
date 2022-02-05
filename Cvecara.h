#include "Buket.h"

#ifndef _CVECARA_H_
#define _CVECARA_H_

class Cvecara
{
    Buket* niz = nullptr;
    vector<Buket> Buketi;
    double zarada = 1000;

public:
    Cvecara();
    void dodajBuket(Buket& c);
    void prodajBuket();
    friend std::ostream& operator<<(std::ostream& it, Cvecara& c);

};

#endif // !_CVECARA_H_#pragma once

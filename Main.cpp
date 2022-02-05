#include "Cvet.h"
#include "Buket.h"
#include "Cvecara.h"
int main()
{
    Cvet c1("a", 100, 200);
    Cvet c2("b", 220, 300);
    Cvet c3("c", 520, 600);
    Buket b1, b2;
    b1.dodajCvet(c1);
    b1.dodajCvet(c1);
    b2.dodajCvet(c2);
    b2.dodajCvet(c3);
    cout << b1 << endl;
    cout << b2 << endl;
    Cvecara cv1, cv2;
    cv1.dodajBuket(b1);
    cv1.dodajBuket(b1);
    cv1.dodajBuket(b1);
    cv1.dodajBuket(b1);
    cv2.dodajBuket(b2);
    cv2.dodajBuket(b2);
    cv2.dodajBuket(b1);
    cout << endl;
    cout << cv1 << endl;
    cout << cv2 << endl;
    cout << "Cvecara 1: " << endl;
    cv1.prodajBuket();
    cv1.prodajBuket();
    cout << "Cvecara 2: " << endl;
    cv2.prodajBuket();
    cout << cv1 << endl;
    cout << cv2 << endl;
}
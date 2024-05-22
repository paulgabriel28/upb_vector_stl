#ifndef _COMPONENTE_C
#define _COMPONENTE_C

#include "Componenta_A.h"
#include "Componenta_B.h"

#include <vector>
#include <string>
using namespace std;

class Componenta_C: public Componenta_A {
    Componenta_B cb;
    vector<string> culori; //culorile în care e vopsita
    // pret = pretul cb + pretul pentru material și manopera

    public:
        Componenta_C(const Componenta_B &, const vector<string> &);
        double getPret() const override;
        void afisare(ostream &) override;
};

#endif
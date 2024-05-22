#ifndef _COMPONENTE_A
#define _COMPONENTE_A

#include <iostream>
#include "Componenta.h"

using namespace std;

class Componenta_A: public Componenta{
    protected:
        int pret_material;
        int pret_manopera;
        // pret = pret_manopera+pret_material
    
    public:
        Componenta_A(const int & = 0, const int & = 0);
        double getPret() const override;
        void afisare(ostream &) override;

};

#endif
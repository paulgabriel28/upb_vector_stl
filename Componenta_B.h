#ifndef _COMPONENTE_B
#define _COMPONENTE_B

#include "Piesa_Cumparata.h"
#include "Componenta.h"

#include <vector>
#include <iostream>
using namespace std;

class Componenta_B: public Componenta{
    protected:
        vector<Piesa_Cumparata> piese; // vector piese cumparate
        int pret_asamblare;           
        // pret = suma valorii de achizitie a pieselor cumparate+pret de    //asamblare

    public:
        Componenta_B(vector<Piesa_Cumparata>, const int &);
        double getPret() const override;
        void afisare(ostream &) override;
};

#endif
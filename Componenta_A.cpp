#include "Componenta_A.h"

Componenta_A::Componenta_A(const int &pMat, const int &pMan): pret_material(pMat), pret_manopera(pMan) {}

double Componenta_A::getPret() const {
    return pret_material + pret_manopera;
}



void Componenta_A::afisare(ostream &dev) {
    dev << "Pret material: " << pret_material << endl;
    dev << "Pret manopera: " << pret_manopera << endl;
}
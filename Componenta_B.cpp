#include "Componenta_B.h"

Componenta_B::Componenta_B(vector<Piesa_Cumparata> vec, const int &pret): piese(vec), pret_asamblare(pret) {}

double Componenta_B::getPret() const {
    int suma = 0;
    for (auto &piesa : piese) {
        suma += piesa.getValoareAchizitie();
    }
    return suma + pret_asamblare;
}

void Componenta_B::afisare(ostream &dev)  {
    dev << "Pret asamblare: " << pret_asamblare << endl;
    dev << "Piese cumparate: " << endl;
    for (auto &piesa : piese) {
        dev << "Tip: '" << piesa.getTip() << "' | Valoare achizitie: " << piesa.getValoareAchizitie() << endl;
    }
}
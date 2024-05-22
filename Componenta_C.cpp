#include "Componenta_C.h"

Componenta_C::Componenta_C(const Componenta_B &comp_b, const vector<string> &vecCulori): cb(comp_b), culori(vecCulori) {}

double Componenta_C::getPret() const {
    return cb.getPret() + Componenta_A::getPret();
}
void Componenta_C::afisare(ostream &dev) {
    dev << "Culori: ";
    for (const auto &culoare : culori) {
        dev << culoare << ' ';
    }
    dev << endl;
    cb.afisare(dev);
}
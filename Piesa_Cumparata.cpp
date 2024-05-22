#include "Piesa_Cumparata.h"

Piesa_Cumparata::Piesa_Cumparata(const string &t, const int &v): tip(t), valoare_achizitie(v) {}

string Piesa_Cumparata::getTip() const {
    return tip;
}

int Piesa_Cumparata::getValoareAchizitie() const {
    return valoare_achizitie;
}
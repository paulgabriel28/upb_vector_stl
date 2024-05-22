#ifndef _PIESA_CUMPARATA
#define _PIESA_CUMPARATA

#include <string>

using namespace std;

class Piesa_Cumparata {
    string tip; 
    int valoare_achizitie;

    public:
        Piesa_Cumparata(const string &, const int &);

        string getTip() const;
        int getValoareAchizitie() const;
};

#endif
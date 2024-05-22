#ifndef _COMPONENTA
#define _COMPONENTA

#include <iostream>
using namespace std;

class Componenta
{
    public:
        virtual ~Componenta() = default;

        virtual double getPret() const = 0;
        virtual void afisare(ostream &) = 0;

        friend ostream& operator<<(ostream &, Componenta &);
};

#endif
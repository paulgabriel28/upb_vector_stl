#include "Componenta.h"

ostream& operator<<(ostream &dev, Componenta &comp) {
    comp.afisare(dev);
    return dev;
}
#include "Componenta.h"
#include "Componenta_A.h"
#include "Componenta_B.h"
#include "Componenta_C.h"

#include <fstream>

using namespace std;

int getSumaTotala(vector<Componenta*> &);
void sendSeparator(ostream&);
void afisareVector(vector<Componenta*> &, ostream&);
vector<Componenta*>::iterator getMax(vector<Componenta*> &);

int main()
{
    cout << "1.	Creati un vector\n";
    vector<Componenta*> componente;
    componente.push_back(new Componenta_A(100, 200));
    componente.push_back(new Componenta_B({Piesa_Cumparata("piesa1", 100), Piesa_Cumparata("piesa2", 200)}, 300));
    componente.push_back(new Componenta_C(Componenta_B({Piesa_Cumparata("piesa3", 100), Piesa_Cumparata("piesa4", 200)}, 300), {"rosu", "albastru"}));
    componente.push_back(new Componenta_A(500, 200));
    componente.push_back(new Componenta_B({Piesa_Cumparata("piesa5", 300), Piesa_Cumparata("piesa6", 210)}, 600));
    componente.push_back(new Componenta_C(Componenta_B({Piesa_Cumparata("piesa7", 100), Piesa_Cumparata("piesa8", 200)}, 300), {"verde", "galben"}));

    afisareVector(componente, cout);

    cout << "2.	Calculati valoarea totala a componentelor\n";
    cout << "Suma totala: " << getSumaTotala(componente) << endl;
    
    cout << "3.	Afisati toate atributele obiectelor din vector intr-un fisier\n";
    fstream fileOut("output.txt", ios::out);
    afisareVector(componente, fileOut);
    fileOut << "Suma totala: " << getSumaTotala(componente) << endl;
    fileOut.close();
    
    cout << "\n-_-_-_-_-_-_-_-_-_-_-\n\n";

    cout << "4.	Stergeti elementele de pe pozitiile i pana la j  din vector\n";
    int i = 2, j = 4;
    componente.erase(componente.begin() + i, componente.begin() + j);
    cout << "Suma totala dupa stergere: " << getSumaTotala(componente) << "\n\n";
    afisareVector(componente, cout);

    cout << "5.	Adaugati o componenta de orice tip alegeti pe pozitia i.\n";
    int poz = 1;
    cout << "Pozitia = " << poz << ":\n\n";
    vector<Componenta*>::iterator it_5 = componente.begin(); // NOTE: declararea unui logica unui iterator spceific unui vector
    it_5 = componente.insert(it_5 + poz, new Componenta_A(999, 1001));
    afisareVector(componente, cout);

    cout << "6.	Gasiti componenta cea mai scumpa.\n";
    vector<Componenta*>::iterator it_6;
    it_6 = getMax(componente);
    cout << "Componenta cea mai scumpa este: \n" << **it_6;
    return 0;
}


void sendSeparator(ostream& dev) {
    dev << "--------------------------------" << endl;
}

int getSumaTotala(vector<Componenta*> &componente) {
    int suma = 0;
    for (auto &comp : componente) {
        suma += comp->getPret();
    }
    return suma;
}

void afisareVector(vector<Componenta*> &componente, ostream& dev) {
    for (auto &comp : componente) {
        dev << *comp;
        dev << "Pret: " << comp->getPret() << endl;
        sendSeparator(dev);
        dev << endl;
    }
}

vector<Componenta*>::iterator getMax(vector<Componenta*> &componente) {
    vector<Componenta*>::iterator it;
    double pretMax = -1;

    for(auto iter = componente.begin(); iter != componente.end(); iter++) {
        if((*iter)->getPret() > pretMax) {
            pretMax = (*iter)->getPret();
            it = iter;
        }
    }

    return it;
}
// Airidas Rupšas - JNII21

#include <iostream>
#include <cmath>

using namespace std;

class Skritulys
{
    protected:
    int r; 
    double plotas;

    public:
    void ivestiR();
    int gautiR() {return r;}
    void plotoApskaiciavimas();
    double gautiPlota() {return plotas;} 
};

class Ritinys : public Skritulys
{
    protected:
    int h;
    double turis;

    public:
    void ivestiH();
    int gautiH() {return h;}
    void turioApskaiciavimas();
};

void Skritulys::ivestiR()
{
    cout << "Įveskite R (spindulį): ";
    cin >> r;
}

void Ritinys::ivestiH()
{
    cout << "Įveskite H (aukštinę): ";
    cin >> h;
}

void Skritulys::plotoApskaiciavimas()
{
    plotas = M_PI * pow(r, 2);
    cout << "Plotas: " << plotas << endl;
}

void Ritinys::turioApskaiciavimas()
{
    turis = gautiPlota() * h;
    cout << "Tūris: " << turis << endl;
}

int main()
{
    Ritinys ritinys;

    ritinys.ivestiR();
    ritinys.gautiR();
    ritinys.ivestiH();
    ritinys.gautiH();
    ritinys.plotoApskaiciavimas();
    ritinys.gautiPlota();
    ritinys.turioApskaiciavimas();

    return 0;
}

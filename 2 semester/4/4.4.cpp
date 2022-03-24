// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

class Geometrine_figura
{
    protected:
    double perimetras;
    double plotas;

    public:
    void parodytiPerimetra() {cout << "Perimetras: " << perimetras << endl;}
    void parodytiPlota() {cout << "Plotas: " << plotas << endl;}
};

class Staciakampis : public Geometrine_figura
{
    protected:
    double ilgis;
    double plotis;

    public:
    Staciakampis (double i, double p)
    {
        ilgis = i;
        plotis = p;
    }
    double gautiIlgi() {return ilgis;}
    double gautiPloti() {return plotis;}
    void parodytiIlgi() {cout << "Ilgis: " << ilgis << endl;}
    void parodytiPloti() {cout << "Plotis: " << plotis << endl;}
    void apskaiciuotiPerimetra();
    void apskaiciuotiPlota();
};

class Staciakampis_gretasienis : public Staciakampis
{
    protected:
    double aukstis;
    double turis;

    public:
    Staciakampis_gretasienis (double a, double p, double i) : Staciakampis(i, p)
    {
        aukstis = a;
    }
    double gautiAuksti() {return aukstis;}
    void parodytiAuksti() {cout << "Aukštis: " << aukstis << endl;}
    void apskaiciuotiTuri();
    void parodytiTuri() {cout << "Tūris: " << turis << endl;}
    void apskaiciuotiPerimetra();
    void apskaiciuotiPlota();
};

void ivestiIlgi(double& ilgis)
{
    cout << "Įveskite ilgį: ";
    cin >> ilgis;
}

void ivestiPloti(double& plotis)
{
    cout << "Įveskite plotį: ";
    cin >> plotis;
}

void ivestiAuksti(double& aukstis)
{
    cout << "Įveskite aukštį: ";
    cin >> aukstis;
}

void Staciakampis::apskaiciuotiPerimetra()
{
    perimetras = (2 * gautiIlgi()) + (2 * gautiPloti());
}

void Staciakampis_gretasienis::apskaiciuotiPerimetra()
{
    Staciakampis::apskaiciuotiPerimetra();
    perimetras = (perimetras * 2) + (gautiAuksti() * 4);
}

void Staciakampis::apskaiciuotiPlota()
{
    plotas = gautiIlgi() * gautiPloti();
}

void Staciakampis_gretasienis::apskaiciuotiPlota()
{
    Staciakampis::apskaiciuotiPlota();
    // Stačiakampio gretasienio paviršiaus plotas;
    plotas = 2 * (plotas + gautiPloti() * gautiAuksti() + gautiIlgi() * gautiAuksti()); 
}

void Staciakampis_gretasienis::apskaiciuotiTuri()
{
    turis = plotas * gautiAuksti();
}

int main()
{
    double ilgis, plotis, aukstis, perimetras, plotas, turis;
    ivestiIlgi(ilgis);
    ivestiPloti(plotis);
    ivestiAuksti(aukstis);

    Staciakampis_gretasienis figura(aukstis, plotis, ilgis);

    figura.gautiIlgi();
    figura.gautiPloti();
    figura.gautiAuksti();

    figura.apskaiciuotiPerimetra();
    figura.apskaiciuotiPlota();
    figura.apskaiciuotiTuri();

    figura.parodytiIlgi();
    figura.parodytiPloti();
    figura.parodytiAuksti();
    figura.parodytiPerimetra();
    figura.parodytiPlota();
    figura.parodytiTuri();

    return 0;
}

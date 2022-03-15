// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

class Darbuotojas
{
    public:
        int GautiAmziu();
        void IvestiAmziu(int metai1);
        int GautiPatirti();
        void IvestiPatirti(int metai2);
        int GautiAtlyginima();
        void IvestiAtlyginima(int atlyginimas1);
        int GautiAtlyginimairankas();
        void Atlyginimoapskaiciavimas();
        int GautiSodra();
        void SodrosApskaiciavimas();
        int GautiPM();
        void PMApskaiciavimas();

    private:
        int amzius;
        int patirtis;
        int atlyginimas;
        int atlyginimasirankas;
        int atlyginimassodra;
        int atlyginimaspm;
};

int Darbuotojas::GautiAmziu()
{
    return amzius;
}

void Darbuotojas::IvestiAmziu(int metai1)
{
    amzius = metai1;
}

int Darbuotojas::GautiPatirti()
{
    return patirtis;
}

void Darbuotojas::IvestiPatirti(int metai2)
{
    patirtis = metai2;
}

int Darbuotojas::GautiAtlyginima()
{
    return atlyginimas;
}

void Darbuotojas::IvestiAtlyginima(int atlyginimas1)
{
    atlyginimas = atlyginimas1;
}

int Darbuotojas::GautiAtlyginimairankas()
{
    return atlyginimasirankas;
}

void Darbuotojas::Atlyginimoapskaiciavimas()
{
    atlyginimasirankas = atlyginimas * 0.76; // 100% = -24%.
}

int Darbuotojas::GautiSodra()
{
    return atlyginimassodra;
}

void Darbuotojas::SodrosApskaiciavimas()
{
    atlyginimassodra = atlyginimas * 0.09; 
}

int Darbuotojas::GautiPM()
{
    return atlyginimaspm;
}

void Darbuotojas::PMApskaiciavimas()
{
    atlyginimaspm = atlyginimas * 0.15; 
}

int main()
{
    int k1;
    int k2;
    int k3;
    Darbuotojas Petras;

    cout << "Įveskti Petro amžių: ";
    cin >> k1;
    cout << "Įveskti Petro patirtį metais: ";
    cin >> k2;
    cout << "Įveskti Petro atlyginimą: ";
    cin >> k3;

    Petras.IvestiAmziu(k1);
    Petras.IvestiPatirti(k2);
    Petras.IvestiAtlyginima(k3);
    Petras.Atlyginimoapskaiciavimas();
    Petras.SodrosApskaiciavimas();
    Petras.PMApskaiciavimas();

    cout << "Petro amžius yra " << Petras.GautiAmziu() << endl;
    cout << "Petro patirtis yra " << Petras.GautiPatirti() << " metai(-ų)" << endl;
    cout << "Petro atlyginimas yra " << Petras.GautiAtlyginima() << "€" << endl;
    cout << "Petro sodros mokestis yra " << Petras.GautiSodra() << "€" << endl;
    cout << "Petro pajamų mokestis yra " << Petras.GautiPM() << "€" << endl;
    cout << "Petro atlyginimas į rankas yra " << Petras.GautiAtlyginimairankas() << "€" << endl;

    return 0;
}
// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

class Atlyginimas
{
    private:
        int atlyginimas;
        int atlyginimasirankas;
        int atlyginimassodra;
        int atlyginimaspm;
        int atlyginimasdarb;
    public:
        int GautiAtlyginima();
        void IvestiAtlyginima();
        int GautiAtlyginimairankas();
        void Atlyginimoapskaiciavimas();
        int GautiSodra();
        void SodrosApskaiciavimas();
        int GautiPM();
        void PMApskaiciavimas();
        void darbdaviomoks() {atlyginimasdarb=atlyginimas*0.3117;}
        int GautiDarb() {return atlyginimasdarb;}
};

class Darbuotojas
{
    public:
        int GautiAmziu();
        void IvestiAmziu(int metai1);
        int GautiPatirti();
        void IvestiPatirti(int metai2);
        void ivestiAtlyginima(int atl) {atlyginimas = atl;}
        

    private:
        int amzius;
        int patirtis;
        int atlyginimas;
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

int Atlyginimas::GautiAtlyginima()
{
    return atlyginimas;
}

void Atlyginimas::IvestiAtlyginima()
{
    cout << "Įveskite atlyginimą: " << endl;
    cin >> atlyginimas;
}

int Atlyginimas::GautiAtlyginimairankas()
{
    return atlyginimasirankas;
}

void Atlyginimas::Atlyginimoapskaiciavimas()
{
    atlyginimasirankas = (atlyginimas - atlyginimasdarb) * 0.76; // 100% = -24%.
}

int Atlyginimas::GautiSodra()
{
    return atlyginimassodra;
}

void Atlyginimas::SodrosApskaiciavimas()
{
    atlyginimassodra = (atlyginimas - atlyginimasdarb) * 0.09; 
}

int Atlyginimas::GautiPM()
{
    return atlyginimaspm;
}

void Atlyginimas::PMApskaiciavimas()
{
    atlyginimaspm = (atlyginimas - atlyginimasdarb) * 0.15; 
}

int main()
{
    Atlyginimas eurai;
    Darbuotojas Petras;
    Petras.IvestiAmziu(20);
    Petras.IvestiPatirti(2);
    eurai.IvestiAtlyginima();
    eurai.darbdaviomoks();
    eurai.SodrosApskaiciavimas();
    eurai.PMApskaiciavimas();
    eurai.Atlyginimoapskaiciavimas();
    Petras.ivestiAtlyginima(eurai.GautiAtlyginimairankas());

    cout << "Petro amžius yra " << Petras.GautiAmziu() << endl;
    cout << "Petro patirtis yra " << Petras.GautiPatirti() << " metai(-ų)" << endl;
    cout << "Petro atlyginimas yra " << eurai.GautiAtlyginima() << "€" << endl;
    cout << "Petro sodros mokestis yra " << eurai.GautiSodra() << "€" << endl;
    cout << "Petro pajamų mokestis yra " << eurai.GautiPM() << "€" << endl;
    cout << "Darbdavio sumokami mokesciai " << eurai.GautiDarb() << "€" << endl;
    cout << "Petro atlyginimas į rankas yra " << eurai.GautiAtlyginimairankas() << "€" << endl;

    return 0;
}
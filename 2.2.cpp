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

int Darbuotojas::GautiAtlyginima()
{
    return atlyginimas;
}

void Darbuotojas::IvestiAtlyginima(int atlyginimas1)
{
    atlyginimas = atlyginimas1;
}

int main()
{
    Darbuotojas Petras;
    Petras.IvestiAmziu(20);
    Petras.IvestiPatirti(2);
    Petras.IvestiAtlyginima(600);
    

    cout << "Petro amžius yra " << Petras.GautiAmziu() << endl;
    cout << "Petro patirtis yra " << Petras.GautiPatirti() << " metai(-ų)" << endl;
    cout << "Petro atlyginimas yra " << Petras.GautiAtlyginima() << "€" << endl;

    return 0;
}
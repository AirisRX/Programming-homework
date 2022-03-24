// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

class Figura
{
    public:
    Figura(int skt, bool tsg);
    int GautiKrastiniusk();
    int GautiTeisinguma();

    private:
    int krastiniusk;
    bool teisingumas;
};

Figura::Figura(int skt, bool tsg)
{
    krastiniusk = skt;
    teisingumas = tsg;
}

int Figura::GautiKrastiniusk()
{
    return krastiniusk;
}

int Figura::GautiTeisinguma()
{
    return teisingumas;
}


int main()
{
    int k1, k3;
    bool k2, k4;

    cout << "Įveskite kraštinių skaičių pirmai figurai: ";
    cin >> k1;
    cout << "Įveskite ar taisyklingą pirmoji figurą (0 = ne, 1 = taip): ";
    cin >> k2;

    cout << "Įveskite kraštinių skaičių antrai figurai: ";
    cin >> k3;
    cout << "Įveskite ar taisyklingą antroji figurą (0 = ne, 1 = taip): ";
    cin >> k4;

    Figura GeometrineFigura(k1, k2);
    Figura GeometrineFigura2(k3, k4);

    cout << "Pirmos geometrines figuros kraštinių skaičius yra: " << GeometrineFigura.GautiKrastiniusk() << endl;
    if (GeometrineFigura.GautiTeisinguma())
    {
        cout << "Pirma geometrine figura yra teisinga." << endl;
    }
    else
    {
        cout << "Pirma geometrine figura yra neteisinga." << endl;
    }
    cout << "Antros geometrines figuros kraštinių skaičius yra: " << GeometrineFigura2.GautiKrastiniusk() << endl;
    if (GeometrineFigura2.GautiTeisinguma())
    {
        cout << "Antra geometrine figura yra teisinga." << endl;
    }
    else
    {
        cout << "Antra geometrine figura yra neteisinga." << endl;
    }

    return 0;
}

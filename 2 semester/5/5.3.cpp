// Airidas Rup�as - JNII21

#include <iostream>

using namespace std;

class Prekes
{
    protected:
    string pavadinimas;
    int kiekis;
    double vntkaina;

    public:
    Prekes(string p, int k, double vk)
    {
        pavadinimas = p;
        kiekis = k;
        vntkaina = vk;
    }
    string gautiPav() {return pavadinimas;}
    double gautiKieki() {return kiekis;}
    double gautivntkaina() {return vntkaina;}
    virtual double visokaina() {return kiekis * vntkaina;}
};

class Prekes_su_nuolaida : public Prekes
{
    protected:
    double nuolaida;

    public:
    Prekes_su_nuolaida(string p, int k, double vk, double n)
        : Prekes(p, k ,vk), nuolaida(n) {}
    virtual double visokaina() {return kiekis * vntkaina * (1 - nuolaida);}
};

int main()
{
    Prekes* prekes[10];

    string pavadinimas;
    int kiekis, n;
    double vntkaina, nuolaida, visokaina = 0;
    char atsakymas;
    
    cout << "Kiek tur�site skirting� preki�? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "�veskite " << i + 1 << " prek�s pavadinim�: ";
        cin >> pavadinimas;

        cout << "�veskite vienet� kiek�: ";
        cin >> kiekis;

        cout << "�veskite vieneto kain�: ";
        cin >> vntkaina;
        
            cout << "Ar prek� turi nuolaida?: t = taip, n = ne: ";
            cin >> atsakymas;

            if (atsakymas == 't')
            {
                cout << "�veskite nuolaidos dal� (0 - 0.50 - 1): ";
                cin >> nuolaida;
                prekes[i] = new Prekes_su_nuolaida(pavadinimas, kiekis, vntkaina, nuolaida);
            }
            else if (atsakymas == 'n')
            {
                prekes[i] = new Prekes(pavadinimas, kiekis, vntkaina);
            }
    }

    for (int i = 0; i < n; i++)
    {
        visokaina += prekes[i]->visokaina();
    }
    cout << "I� viso jums reikia sumok�ti: " << visokaina << endl;
    cout << "Viso gero, geros dienos.";

    for (int i = 0; i < n; i++)
    {
        delete prekes[i];
    }
}

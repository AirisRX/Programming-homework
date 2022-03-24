// Airidas Rupğas - JNII21

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
    
    cout << "Kiek turësite skirtingø prekiø? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Áveskite " << i + 1 << " prekës pavadinimà: ";
        cin >> pavadinimas;

        cout << "Áveskite vienetø kieká: ";
        cin >> kiekis;

        cout << "Áveskite vieneto kainà: ";
        cin >> vntkaina;
        
            cout << "Ar prekë turi nuolaida?: t = taip, n = ne: ";
            cin >> atsakymas;

            if (atsakymas == 't')
            {
                cout << "Áveskite nuolaidos dalá (0 - 0.50 - 1): ";
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
    cout << "Iğ viso jums reikia sumokëti: " << visokaina << endl;
    cout << "Viso gero, geros dienos.";

    for (int i = 0; i < n; i++)
    {
        delete prekes[i];
    }
}

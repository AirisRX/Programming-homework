// Airidas Rupšas - JNII21

#include <iostream>
#include <cmath>

using namespace std;

class taskas
{
    private:
        int x, y;
    public:
        int gautix() {return x;};
        int gautiy() {return y;};
        void irasytix() {cin >> x;};
        void irasytiy() {cin >> y;};
};

class staciakampis
{
    private:
        taskas kampas1;
        taskas kampas2;
        taskas kampas3;
        taskas kampas4;
        int perimetras;
        int plotas;
    public:
        void irasytik1();
        void irasytik2();
        void irasytik3();
        void irasytik4();
        void skaiciuotiperimetra();
        void skaiciuotiplota();
        int gautiplota() {return plotas;};
        int gautiperimetra() {return perimetras;};
};

void staciakampis::skaiciuotiperimetra()
{
    int a = sqrt(pow(kampas2.gautix() - kampas1.gautix(), 2) + pow(kampas2.gautiy() - kampas1.gautiy(), 2));
    int b = sqrt(pow(kampas3.gautix() - kampas2.gautix(), 2) + pow(kampas3.gautiy() - kampas2.gautiy(), 2));
    int c = sqrt(pow(kampas4.gautix() - kampas3.gautix(), 2) + pow(kampas4.gautiy() - kampas3.gautiy(), 2));
    int d = sqrt(pow(kampas1.gautix() - kampas4.gautix(), 2) + pow(kampas1.gautiy() - kampas4.gautiy(), 2));
    perimetras = a + b + c + d;
}

void staciakampis::skaiciuotiplota()
{
    int a = sqrt(pow(kampas2.gautix() - kampas1.gautix(), 2) + pow(kampas2.gautiy() - kampas1.gautiy(), 2));
    int b = sqrt(pow(kampas3.gautix() - kampas2.gautix(), 2) + pow(kampas3.gautiy() - kampas2.gautiy(), 2));
    plotas = a * b;
}

void staciakampis::irasytik1()
{
    cout << "Pirmo kampo koordinatės: " << endl << "X: ";
    kampas1.irasytix();
    cout << "Y: ";
    kampas1.irasytiy();
}

void staciakampis::irasytik2()
{
    cout << "Antro kampo koordinatės: " << endl << "X: ";
    kampas2.irasytix();
    cout << "Y: ";
    kampas2.irasytiy();
}

void staciakampis::irasytik3()
{
    cout << "Trečio kampo koordinatės: " << endl << "X: ";
    kampas3.irasytix();
    cout << "Y: ";
    kampas3.irasytiy();
}

void staciakampis::irasytik4()
{
    cout << "Ketvirto kampo koordinatės: " << endl << "X: ";
    kampas4.irasytix();
    cout << "Y: ";
    kampas4.irasytiy();
}

int main()
{

    staciakampis Staciakampis;
    Staciakampis.irasytik1();
    Staciakampis.irasytik2();
    Staciakampis.irasytik3();
    Staciakampis.irasytik4();
    Staciakampis.skaiciuotiperimetra();
    Staciakampis.skaiciuotiplota();

    cout << "Stačiakampio perimetras: " << Staciakampis.gautiperimetra() << endl;
    cout << "Stačiakampio plotas: " << Staciakampis.gautiplota() << endl;

    return 0;

}

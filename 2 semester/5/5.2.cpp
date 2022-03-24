// Airidas Rupðas - JNII21

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

class Geometrine_figura
{
    protected:
    double plotas;

    public:
    virtual void apskaiciuotiPlota() = 0;
};

class Trikampis : public Geometrine_figura
{
    protected:
    double aukstine;
    double ilgis;

    public:
    Trikampis(double i, double a)
    {
        ilgis = i;
        aukstine = a;
    }
    double gautiIlgi() {return ilgis;}
    double gautiAukstine() {return aukstine;}
    virtual void apskaiciuotiPlota() {cout << "Trikampio plotas: " << ((gautiIlgi() * gautiAukstine()) / 2) << endl;}
};

class Skritulys : public Geometrine_figura
{
    protected:
    double spindulys;

    public:
    Skritulys(double r) {spindulys = r;}
    double gautiSpinduli() {return spindulys;}
    virtual void apskaiciuotiPlota() {cout << "Skritulio plotas: " << (M_PI * pow(gautiSpinduli(), 2)) << endl;}
};

class Staciakampis : public Geometrine_figura
{
    protected:
    double ilgis;
    double plotis;

    public:
    Staciakampis(double i, double p)
    {
        ilgis = i;
        plotis = p;
    }
    double gautiIlgi() {return ilgis;}
    double gautiPloti() {return plotis;}
    void parodytiIlgi() {cout << "Ilgis: " << ilgis << endl;}
    void parodytiPloti() {cout << "Plotis: " << plotis << endl;}
    virtual void apskaiciuotiPlota() {cout << "Staèiakampio plotas: " << (gautiIlgi() * gautiPloti()) << endl;}
};

int main()
{
    Geometrine_figura* figura[3];
    double ti, si, ta, ss, sp;
    cout << "Áveskite trikampio ilgá: ";
    cin >> ti;
    cout << "Áveskite trikampio aukðtinæ: ";
    cin >> ta;
    cout << "Áveskite skritulio spindulá: ";
    cin >> ss;
    cout << "Áveskite staèiakampio ilgá: ";
    cin >> si;
    cout << "Áveskite staèiakampio plotá: ";
    cin >> sp;

    figura[0] = new Trikampis(ti, ta);
    figura[1] = new Skritulys(ss);
    figura[2] = new Staciakampis(si, sp);

    for (int i = 0; i <= 2; i++)
    {
        figura[i]->apskaiciuotiPlota();
        delete figura[i];
    }

    return 0;
}
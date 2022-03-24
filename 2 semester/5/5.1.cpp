// Airidas Rupðas - JNII21

#include <iostream>
#include <cmath>

using namespace std;

class Funkcija
{
    protected:
    double x = 0;

    public:
    void ivestiX(int q) {x = q;}
    double gautiX() {return x;}
    virtual void apskaiciuoti() = 0;
};

class Tiesine : public Funkcija
{
    protected:
    double k = 0, b = 0;

    public:
    void ivestiK()
    {
        cout << "Áveskite k: ";
        cin >> k;
    }
    void ivestiB()
    {
        cout << "Áveskite b: ";
        cin >> b;
    }
    double gautiK() {return k;}
    double gautiB() {return b;}
    virtual void apskaiciuoti() {cout << "Tiesine funkcija: " << (gautiK() * gautiX() + gautiB()) << endl;}
};

class Laipsnine : public Funkcija
{
    protected:
    double n = 0;

    public:
    void ivestiN()
    {
        cout << "Áveskite n: ";
        cin >> n;
    }
    double gautiN() {return n;}
    virtual void apskaiciuoti() {cout << "Laipsnine funkcija: " << (pow(gautiX(), gautiN())) << endl;}
};

class Sinusoide : public Funkcija
{
    public:
    virtual void apskaiciuoti() {cout << "Sinusoidë: " << sin(gautiX()) << endl;}
};

int main()
{
    Funkcija* funkcija[3];
    funkcija[0] = new Tiesine;
    funkcija[1] = new Laipsnine;
    funkcija[2] = new Sinusoide;

    int x;

    cout << "Áveskite X: ";
    cin >> x;

    ((Tiesine*)funkcija[0])->ivestiX(x);
    ((Tiesine*)funkcija[0])->ivestiB();
    ((Tiesine*)funkcija[0])->ivestiK();

    ((Laipsnine*)funkcija[1])->ivestiX(x);
    ((Laipsnine*)funkcija[1])->ivestiN();

    ((Sinusoide*)funkcija[2])->ivestiX(x);

    for (int i = 0; i <= 2; i++)
    {
        funkcija[i]->apskaiciuoti();
        delete funkcija[i];
    }

    return 0;
}
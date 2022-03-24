// Airidas Rupšas - JNII21

#include <iostream>
#include <cmath>

using namespace std;

class Vektorius2D
{
    protected:
    int x, y;

    public:
    void ivestiX();
    void ivestiY();

    int gautiX() {return x;}
    int gautiY() {return y;}

    void ilgioApskaiciavimas1();
};

class Vektorius3D : public Vektorius2D
{
    protected:
    int z;

    public:
    void ivestiZ();

    void gautiXT() {cout << "X: " << gautiX() << endl;}
    void gautiYT() {cout << "Y: " << gautiY() << endl;}
    void gautiZ() {cout << "Z: " << z << endl;}

    void ilgioApskaiciavimas2();
};

void Vektorius2D::ivestiX()
{
    cout << "Įveskite X: ";
    cin >> x;
};

void Vektorius2D::ivestiY()
{
    cout << "Įveskite Y: ";
    cin >> y;
};

void Vektorius3D::ivestiZ()
{
    cout << "Įveskite Z: ";
    cin >> z;
};

void Vektorius2D::ilgioApskaiciavimas1()
{
    double l = 0;
    l = sqrt(pow(x, 2) + pow(y, 2));
    cout << "Vektoriaus ilgis: " << l << endl;
};

void Vektorius3D::ilgioApskaiciavimas2()
{
    double l1 = 0;
    l1 = sqrt(pow(gautiX(), 2) + pow(gautiY(), 2) + pow(z, 2));
    cout << "Erdvinio vektoriaus ilgis: " << l1 << endl;
};

int main()
{
    Vektorius3D vektorius;

    vektorius.ivestiX();
    vektorius.ivestiY();
    vektorius.ivestiZ();

    vektorius.gautiX();
    vektorius.gautiY();
    vektorius.gautiXT();
    vektorius.gautiYT();
    vektorius.gautiZ();

    vektorius.ilgioApskaiciavimas1();
    vektorius.ilgioApskaiciavimas2();

    return 0;
}

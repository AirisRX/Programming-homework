// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

class Darbuotojas
{
    public:
        int amzius;
        int patirtis;
        int atlyginimas;
};

int main()
{
    Darbuotojas Petras;
    Petras.amzius = 20;
    Petras.patirtis = 2;
    Petras.atlyginimas = 600;

    cout << "Petro amžius yra " << Petras.amzius << endl;
    cout << "Petro patirtis yra " << Petras.patirtis << " metai(-ų)" << endl;
    cout << "Petro atlyginimas yra " << Petras.atlyginimas << "€" << endl;

    return 0;
}

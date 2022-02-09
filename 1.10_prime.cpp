// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    bool pirminis = true;

    cout << "Įveskite naturalų skaičių: " << endl;
    cin >> m;

    if (m == 0 || m == 1)
    {
        pirminis = false;
    }
    else
    {
        for (n = 2; n <= m / 2; ++n)
        {
            if (m % n == 0)
            {
                pirminis = false;
                break;
            }
        }
    }

    if (pirminis)
        cout << m << " yra pirminis skaičius. ";
    else
        cout << m << " nėra pirminis skaičius. ";

    return 0;
}
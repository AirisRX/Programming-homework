// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

int faktorialas(int n)
{
    for (int i = n-1; i > 1 ; i--)
    {
        n = n * i;
    }
    return n;
}

int main()
{
    int n;

    cout << "Įveskite norimą skaičių: " << endl;
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << "Skaičiaus " << n << " faktorialas yra 1" << endl;
    }
    else if (n <= -1)
    {
        cout << "Skaičiaus faktorialas negali būti neigiamas." << endl;
    }
    else
    cout << "Skaičiaus " << n << " faktorialas yra " << faktorialas(n) << endl;

    return 0;
}

// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

int main() 
{
    int n;
    int m;
    int suma = 0;
    cout << "Įveskite norimą skaičių, norint gauti skaitmenų sumą: ";
    cin >> n;

    while (n > 0)
    {
        m = n % 10;
        suma = suma + m;
        n = n / 10;
    }

        cout << "Suma: " << suma;

    return 0;
}

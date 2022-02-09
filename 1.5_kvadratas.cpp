// Airidas Rupšas - JNII21

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int n; // skaičius
    int m = 2; // numatytas kvadrato laipsnis
    
    cout << "Įveskite norimą skaičių: ";
    cin >> n;

    for (int i = 1; i<=n; i++) {
        cout << "Skaičiaus " << i << " kvadratas yra " << pow(i,m) << endl;
    }

    return 0;
}
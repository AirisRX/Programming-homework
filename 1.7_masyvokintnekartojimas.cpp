// Airidas Rupšas - JNII21

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Masyvas: 1, 1, 6, 7, 9, 4, 8." << endl;
    cout << "Nesikartoja: " << endl;
    
    int array[] = {1, 1, 6, 7, 9, 4, 8};

    for (int n = 0; n < 7; n++)
    {
        bool kartojasi = false;

        for(int t = 0; t < 7; t++)
        {
            if (array[t] == array[n] && t != n)
            {
                kartojasi = true;
            }
        }
        if (kartojasi == false)
        cout << array[n] << endl;
    }

    return 0;
}
// Airidas Rupšas JNII21

#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int n[])
{

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10-i-1; j++)
        {
            if(n[j]>n[j+1])
            {
                swap(n[j], n[j+1]);
            }
        }
    }
    
}

int main ()
{
    int array[10];
    cout << "Įveskite 10 norimų skaičių (Be kablelių): " << endl;
    for(int i=0; i<10; i++)
    {
        cin >> array[i];
    }

    BubbleSort(array);

    cout << "Išrūšiavus: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << "  ";
    }

    return 0;
}
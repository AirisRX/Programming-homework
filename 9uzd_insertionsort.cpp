// Airidas Rupšas JNII21

#include <iostream>
#include <algorithm>
using namespace std;

void insertionsort(int array[])
{

    for(int i=1; i<10; i++)
    {
        for(int j=i; j>0; j--) 
        {
            if(array[j-1]>array[j])
            {
                swap(array[j], array[j-1]);
            }
            else
            {
                break;
            }
        }
    }

}

int main()
{
    
    int array[10];
    cout << "Įveskite 10 norimų skaičių (Be kablelių): " << endl;
    for(int i=0; i<10; i++)
    {
        cin >> array[i];
    }

    insertionsort(array);

    cout << "Išrūšiavus: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << "  ";
    }

    return 0;

}
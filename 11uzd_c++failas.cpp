// Airidas Rupšas JNII21 11 užduotis - C++ failo skaitymas

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct kordinates
{
    int x;
    int y;
    int atstumas;
    int num;
};

int main()
{
    int n;
    kordinates array[100];
    ifstream fd("kordinates.txt");
    ofstream fr("atsakymas.txt");
    fd >> n;
    for(int i = 0; i < n; i++)
    {
        fd >> array[i].x >> array[i].y;
        array[i].atstumas = sqrt((array[i].x * array[i].x) + (array[i].y * array[i].y));
        cout << array[i].atstumas << endl;
        fr << array[i].atstumas << endl;
        array[i].num = i+1;
    }
    
    int tatstumas = array[0].atstumas;
    int tnum = array[0].num;
    
    for(int i = 0; i < n; i++)
    {
        if(tatstumas < array[i].atstumas)
        {
            tatstumas = array[i].atstumas;
            tnum = array[i].num;
        }
    }
    
    cout << "Ilgiausiai nutolęs nuo 0;0 yra " << tnum << " taškas, kuris nutolęs per " << tatstumas << ".";
    fr << "Ilgiausiai nutolęs nuo 0;0 yra " << tnum << " taškas, kuris nutolęs per " << tatstumas << ".";

return 0;
}
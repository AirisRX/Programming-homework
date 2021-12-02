// Airidas Rupšas JNII21 - C++ - Hanoi bokštas

#include <iostream>

using namespace std;

void hanoi (int n, char s1, char s2, char s3)
{
	if (n == 1)
	{
		cout << "Perkeltas " << n << " diskas" << " nuo " << s1 << " stiebo ant " << s3 << endl;
		return;
	}
	
	hanoi (n-1, s1, s3, s2);
	cout << "Perkeltas " << n << " diskas" << " nuo " << s1 << " stiebo ant " << s3 << endl;
	hanoi (n-1, s2, s1, s3);
}

int main()
{
    int n;

    cout << "Kiek diskų? " << endl;
    cin >> n;
    
    hanoi (n, 's1', 's2', 's3');

    return 0;
}
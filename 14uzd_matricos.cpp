// Airidas Rupšas JNII21 - C++ - Veiksmai su matricomis - sudėtis, atimtis, daugyba

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char* matrix_data = "matricos.txt";
const char* matrix_results = "results.txt";

int main ()
{

    ofstream fr (matrix_results);
    ifstream fd (matrix_data);
    if (fd.fail())
    {
        cerr << "Nepavyko nuskaityti failo, bandykite dar kartą. " << endl;
        return 1;
    }

    int n, m, x;
    string mat1n, mat2n;
    int n1, m1, n2, m2;

    fd >> n1 >> m1;
    int mat1[n1][m1];
    cout << "Pirmoji matrica: " << mat1n << endl;
    fr << "Pirmoji matrica: " << mat1n << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            fd >> mat1[i][j];
            cout << mat1[i][j] << " ";
            fr << mat1[i][j] << " ";
        }
            cout << endl;
            fr << endl;
    }

    fd >> n2 >> m2;
    int mat2[n2][m2];
    cout << "Antroji matrica: " << mat2n << endl;
    fr << "Antroji matrica: " << mat2n << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            fd >> mat2[i][j];
            cout << mat2[i][j] << " ";
            fr << mat2[i][j] << " ";
        }
            cout << endl;
            fr << endl;
    }

    n = (n1 + n2) / 2;
    m = (m1 + m2) / 2;

    cout << "Matricų sudėjimas: " << endl;
    fr << "Matricų sudėjimas: " << endl;
    int M_addition[n][m];
    int M_transpose[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            M_addition[i][j] = mat1[i][j] + mat2[i][j];
            M_transpose[i][j] = M_addition[i][j];
        }
    };

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << M_addition[i][j] << " ";
            fr << M_addition[i][j] << " ";
        }
        cout << endl;
        fr << endl;
    }

    cout << "Matricų transponavimas: " << endl;
    fr << "Matricų transponavimas: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(M_transpose[i][j], M_transpose[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << M_transpose[i][j] << " ";
            fr << M_transpose[i][j] << " ";
        }
        cout << endl;
        fr << endl;
    }

    cout << "Matricų daugyba: " << endl;
    fr << "Matricų daugyba: " << endl;
    int M_multiply[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            M_multiply[i][j] = 0;
            for (int d = 0; d < m; d++)
            {
                M_multiply[i][j] = M_multiply[i][j] + (mat1[i][d] * mat2[d][j]);
            }
            cout << M_multiply[i][j] << " ";
            fr << M_multiply[i][j] << " ";
        }
        cout << endl;
        fr << endl;
    }

    fd.close();
    fr.close();
    system("PAUSE");
    return 0;
}
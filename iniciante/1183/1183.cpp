#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char O;
    int contador;
    double soma, M[12][12];

    cin >> O;
    soma = 0.0;
    contador = 0;
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cin >> M[i][j];

            if (j > i)
            {
                soma += M[i][j];
                ++contador;
            }
        }
    }

    cout << setprecision(1) << fixed << (O == 'S' ? soma : soma / contador) << endl;

    return 0;
}
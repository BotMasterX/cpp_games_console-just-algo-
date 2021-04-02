#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");
int main()
{
    int numere[200];
    int n;
    fin >> n;
    for(int i = 1; i <= n; ++i)
        fin >> numere[i];
    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
        {
            if(numere[i] % 2 == 0 && numere[j] % 2 == 0 && numere[i] > numere[j] || numere[i] % 2 == 1 && numere[j] % 2 == 1 && numere[i] < numere[j])
            {
                int aux = numere[i];
                numere[i] = numere[j];
                numere[j] = aux;
            }
        }
    for (int i = 1; i <= n; ++i)
        cout << numere[i];


}

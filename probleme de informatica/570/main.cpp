#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.in");

int main()
{
    int n;
    fin >> n;
    int numere[10];
    int numar = 0;
    for (int i = 1; i <= n; ++i){
        fin >> numere[i];
        numar = numar * 10 + numere[i];
    }

    int pasi = 1;
    int suma = numar;
    while(pasi < n)
    {
        int x = numere[1];
        for (int i = 1; i < n; ++i)
            numere[i] = numere[i + 1];
        numere[n] = x;
        pasi++;
        numar = 0;
        for (int i = 1; i <= n; ++i)
            numar = numar * 10 + numere[i];

        suma = suma + numar;
    }
    cout << suma;
}

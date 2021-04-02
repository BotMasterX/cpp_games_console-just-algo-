#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("pp.in");
ofstream fout("pp.out");

int main()
{
    int n;
    int suma = 0;
    int numere[100];
    fin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int valoare;
        fin >> valoare;
        numere[i] = valoare;
        suma += valoare;
        if(suma == i * (i + 1)/2){
            for (int j = 1; j <= i; ++j)
                fout << numere[j] << ' ';
            fout << '\n';}
    }

}

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("pp.in");
ofstream fout("pp.out");

int main()
{
    int n;
    int suma = 0;
    fin >> n;
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        int valoare;
        fin >> valoare;
        suma += valoare;
        if(suma == i * (i + 1)/2)
            count++;
    }
    fout << count;

}

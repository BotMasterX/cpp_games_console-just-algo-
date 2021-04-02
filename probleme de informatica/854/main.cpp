#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main()
{
    int valoare;
    int numere[1001] = {0};
    int minn1 = 1001, minn2 = 1001;
    while(fin >> valoare)
    {
        numere[valoare]++;
        if(minn1 > valoare)
        {
            minn1 = valoare;
        }
        if(minn2 > valoare && valoare != minn1)
        {
            minn2 = valoare;
        }

    }
    int ratie = minn2 - minn1;
    int precedent = minn2;
    int exista = true;
    for (int i = minn2 + 1; i < 1001 && exista ; i++)
    {
        if(numere[i] > 0)
        {
            int diferenta = i - precedent;
            precedent = i;
            if(diferenta != ratie)
                exista = false;
        }
    }

    if(exista)
        cout << ratie;
    else
        cout << "NU";


}

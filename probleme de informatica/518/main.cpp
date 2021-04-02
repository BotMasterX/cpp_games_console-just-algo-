#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("nr.txt");

int main()
{
    int x;
    int numere[101];
    int lungime = 0;
    while(fin >> x)
    {
        if(x > 0)
        {
            lungime = lungime + 1;
            numere[lungime] = x;
        }
    }

    bool sortat = false;
    while(sortat == false)
    {
        sortat = true;
        for (int i = 1; i < lungime; ++i)
            if(numere[i] > numere[i + 1])
            {
                sortat = false;
                int aux = numere[i];
                numere[i] = numere[i + 1];
                numere[i + 1] = aux;
            }
    }
    for (int i = 1; i <= lungime; ++i)
        cout << numere[i] << ' ';
}

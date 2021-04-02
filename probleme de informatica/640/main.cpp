#include <iostream>
using namespace std;

int main()
{
    int S;
    cin >> S;
    int bani[3];
    for (int i = 0; i < 3; ++i)
        cin >> bani[i];

    bool sortat = false;
    while(sortat == false)
    {
        sortat = true;
        for (int i = 0; i < 2; ++i)
        {
            if(bani[i] < bani[i + 1])
            {
                int aux = bani[i];
                bani[i] = bani[i + 1];
                bani[i + 1] = aux;
                sortat = false;
            }
        }
    }

    int pozitie = 0;
    while (pozitie <= 2 && S != 0)
    {
        int nr = 0;
        if(bani[pozitie] <= S)
        {
            nr = S / bani[pozitie];
            S = S - nr * bani[pozitie];
        }
        if(nr != 0)
            cout << nr << '*' << bani[pozitie] << ' ';
        pozitie++;
    }
}

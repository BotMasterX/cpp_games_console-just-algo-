#include <iostream>
using namespace std;

int main()
{
    int numere[200];
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> numere[i];

    bool sortat = false;
    while(sortat == false)
    {
        sortat = true;
        for (int i = 1; i < n; ++i)
            if(numere[i] > numere[i + 1])
            {
                int aux = numere[i];
                numere[i] = numere[i + 1];
                numere[i + 1] = aux;
                sortat = false;
            }
    }

    for (int i = 1; i <= n; ++i)
        cout << numere[i] << ' ';
}

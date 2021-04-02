#include <iostream>
using namespace std;

int main()
{
    int valoare = -1;
    int suma = 0;
    while(valoare != 0)
    {
        cin >> valoare;
        if(valoare != 0)
        {
            if(valoare > 9)
            {
                int ultima_cifra = valoare % 10;
                while(valoare > 9)
                {
                    valoare = valoare / 10;
                }
                suma = suma + ultima_cifra + valoare;
            }
        }
    }
    cout << suma;
}

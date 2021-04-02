#include <iostream>
using namespace std;

int main()
{
    int valoare = -1;
    int suma = 0;
    while (valoare != 0)
    {
        cin >> valoare;
        if(valoare != 0)
        {
            if(valoare > 9)
            {
                while(valoare > 99)
                {
                    valoare = valoare / 10;
                }
                suma = suma + valoare;
            }
        }
    }
    cout << suma;
}

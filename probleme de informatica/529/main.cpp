#include <iostream>
using namespace std;

int main()
{
    int valoare = -1;;
    int elemente = 0;
    int suma = 0;
    while(valoare != 0)
    {
        cin >> valoare;
        if(valoare != 0)
            if(valoare / 10 > 0 && valoare / 10 < 10)
            {
                suma = suma + valoare;
                elemente++;
            }
    }
    cout << double(suma)/double(elemente);
}

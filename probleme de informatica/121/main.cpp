#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rezultat = 0;
    bool gasit = false;
    int prima_cif,ultima_cif;
    while(n)
    {
        if(gasit == false)
        {
            ultima_cif = n % 10;
            gasit = true;
        }
        else
            prima_cif = n % 10;
        n = n / 10;
    }
    rezultat = prima_cif * 10 + ultima_cif;
    if(rezultat % 2 == 1)
        rezultat = rezultat * 2;
    cout << rezultat;
}

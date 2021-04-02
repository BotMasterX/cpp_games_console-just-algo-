#include <iostream>
using namespace std;


int puteri(int n)
{
    int divizor = 2;
    int putere = 0;
    int suma = putere;

    while(n % divizor == 0)
    {
        putere++;
        n = n / divizor;
    }
    suma += putere;
    divizor = 3;
    while(divizor * divizor <= n)
    {
        putere = 0;
        while(n % divizor == 0)
        {
            putere++;
            n = n / divizor;
        }
        suma += putere;
        divizor += 2;
    }

    if(n)
        suma++;
    return suma;
}

int main()
{
    int a,b;
    cin >> a >> b;
    if(puteri(a) > puteri(b))
        cout << a;
    else
        cout << b;

}

#include <iostream>
using namespace std;

int suma_div(int n)
{
    int suma = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            suma = suma + i;
            if(i * i != n)
                suma = suma + n/i;
        }
    }
    return suma;
}

int main()
{
    int n;
    int maxx = 0;
    int numar_max = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int numar;
        cin >> numar;
        if(maxx < suma_div(numar))
        {
           maxx = suma_div(numar);
           numar_max = numar;
        }
    }
    cout << numar_max;
}

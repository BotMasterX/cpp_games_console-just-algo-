#include <iostream>
using namespace std;

int prima_cif(int n)
{
    int cifra;
    while(n)
    {
        cifra = n % 10;
        n = n / 10;
    }
    return cifra;
}


int main()
{
    int a[1001],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int stanga = 1;
    int dreapta = n;
    int count = 0;
    while(stanga <= dreapta)
    {
        if(prima_cif(a[stanga]) == prima_cif(a[dreapta]))
            count++;
        stanga++;
        dreapta--;
    }
    cout << count;
}

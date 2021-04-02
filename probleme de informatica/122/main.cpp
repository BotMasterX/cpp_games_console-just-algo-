#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int cifre = 0;
    while(m)
    {
        cifre++;
        m = m / 10;
    }
    int rez = 0;
    int putere = 1;
    while(n)
    {
        if(cifre % 2 == 1 && n % 10 % 2 == 0)
        {
            rez = rez + n % 10 * putere;
            putere = putere * 10;
        }
        cifre--;
        n = n / 10;
    }
    cout << rez;
}

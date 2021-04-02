#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int poz1 = 0;
    int poz2 = 0;
    while(m)
    {
        poz1 = poz1 * 10 + m / 10 % 10;
        m = m / 100;
    }

    m = n;
    while(m)
    {
        poz2 = poz2 * 10 + m % 10;
        m = m / 100;
    }

    int nou = 0;
    while(poz2 && poz1)
    {
        nou = nou * 10 + poz2 % 10;
        nou = nou * 10 + poz1 % 10;
        poz1 = poz1 / 10;
        poz2 = poz2 / 10;
    }
    while(poz2)
    {
        nou = nou * 10 + poz2 % 10;
        poz2 = poz2 / 10;
    }
    while(poz1)
    {
        nou = nou * 10 + poz1 % 10;
        poz1 = poz1 / 10;
    }
    cout << nou;
}

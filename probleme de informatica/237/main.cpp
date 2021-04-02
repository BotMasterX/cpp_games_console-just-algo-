#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int putere = 1;
    int nou = 0;
    while(n)
    {
        int cifra = n % 10;
        if(cifra % 2 == 1)
        {
            nou = nou + putere * cifra;
            putere = putere * 10;
        }

         n = n / 10;
    }
    cout << nou;
}

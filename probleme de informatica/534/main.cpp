#include <iostream>
using namespace std;

int main()
{
    int n,c;
    cin >> n >> c;
    int nou = 0;
    int putere = 1;
    while(n)
    {
        if(n % 10 != c)
        {
            nou = nou + putere * (n % 10);
            putere = putere * 10;
        }
        n = n / 10;
    }
    cout << nou;
}

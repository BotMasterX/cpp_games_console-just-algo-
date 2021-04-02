#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cifre = 0;
    int m = n;
    while(m)
    {
        cifre++;
        m = m / 10;
    }
    int c = cifre;
    int nr1 = 0;
    int nr2 = 0;
    int putere1 = 1;
    int putere2 = 1;
    bool ok = false;
    while(n)
    {
        if(ok == false)
        {
            nr1 = nr1 + putere1 * (n % 10);
            putere1 = putere1 * 10;
        }
        else
        {
            nr2 = nr2 + putere2 * (n % 10);
            putere2 = putere2 * 10;
        }

        if(c == cifre/2+1)
        {
            ok = true;
            nr1 = nr1 % (putere1 / 10);
        }
        c--;
        n = n/10;
    }
    cout << nr2 << nr1;
}

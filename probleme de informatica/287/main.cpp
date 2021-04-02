#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nou = 0;
    int maxx = 0;
    int nr1 = 0;
    int nr2 = 0;
    while(n > 10)
    {
        nou = nou * 10 + n % 10;
        int m = nou;
        int oglinda = 0;
        while(m)
        {
            oglinda = oglinda * 10 + m % 10;
            m = m / 10;
        }

        if(n/10 * oglinda > maxx)
        {
            maxx = n/10 * oglinda;
            nr1 = n/10;
            nr2 = oglinda;
        }
        n = n / 10;
    }

    cout << nr1 << '*' << nr2;
}

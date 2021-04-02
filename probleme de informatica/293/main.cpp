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
    int nr1 = 0;
    int nr2 = 0;

    int count = 0;
    bool format1 = false;
    while(n)
    {
        if((count == cifre/2 + 1 && cifre % 2 == 1)||(count == cifre/2 && cifre % 2 == 0))
        {
            count = 0;
            format1 = true;
        }

        if(format1 == false)
            nr1 = nr1 * 10 + n % 10;
        else
            nr2 = nr2 * 10 + n % 10;
        count++;

        n = n / 10;
    }
    int oglindit1 = 0;
    int oglindit2 = 0;

    while(nr1)
    {
        oglindit1 = oglindit1 * 10 + nr1 % 10;
        nr1 = nr1 / 10;
    }
    while(nr2)
    {
        oglindit2 = oglindit2 * 10 + nr2 % 10;
        nr2 = nr2 / 10;
    }
    cout << oglindit2 << ' ' << oglindit1;
}

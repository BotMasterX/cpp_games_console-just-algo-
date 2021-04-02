#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i+=2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        int m = x;
        if(prim(m))
        {
            int cifre = 0;
            while(m)
            {
                cifre++;
                m = m / 10;
            }
            total = total + cifre;
        }
    }
    cout << total;
}

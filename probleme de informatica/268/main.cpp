#include <iostream>
using namespace std;

int prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int oglindit = 0;
        int m = i;
        while(m)
        {
            oglindit = oglindit * 10 + m % 10;
            m = m / 10;
        }
        if(prim(oglindit) && prim(i))
            cout << i << ' ';
    }
}

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
bool super_prim(int n)
{
    while(n)
    {
        if(!prim(n))
            return false;
        n = n / 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if(super_prim(i))
            cout << i << ' ';
    }
}

#include <iostream>
using namespace std;

int div(int n)
{
    int nr = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            nr++;
            if(i * i < n)
                nr++;
        }
    }
    return nr;
}

int main()
{
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
        for (int j = a; j <= b; ++j)
        {
            if(div(i) == div(j))
            {
                cout << i << ' ' << j << '\n';
            }
        }
}

#include <iostream>
using namespace std;

int nr_div(int numar)
{
    int nr = 2;
    for (int i = 2; i * i <= numar; ++i)
    {
        if(numar % i == 0)
        {
            nr++;
            if(i * i < numar)
                nr++;
        }
    }
    return nr;
}

int main()
{
    int n,k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        if(nr_div(i) >= k)
            cout << i << ' ';
    }
}

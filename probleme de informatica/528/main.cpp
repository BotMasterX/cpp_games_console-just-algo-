#include <iostream>
using namespace std;


int div_nr(int numar)
{
    int nr = 0;
    for (int i = 1; i * i <= numar; ++i)
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
    int n;
    int nr = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if(div_nr(x) == i)
            nr++;
    }
    cout << nr;
}

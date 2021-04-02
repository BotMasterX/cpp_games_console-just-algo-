#include <iostream>
using namespace std;

int nr_div(int n)
{
    int nr = 0;
    for (int i = 1; i <= n; ++i)
        if(n % i == 0)
            nr++;
    return nr;
}
int main()
{
    int minn = 100000;
    int x = -1;
    int value = 0;
    while(x != 0)
    {
        cin >> x;
        if(x)
            if(minn >= nr_div(x))
            {
                minn = nr_div(x);
                value = x;
            }
    }
    cout << value;
}

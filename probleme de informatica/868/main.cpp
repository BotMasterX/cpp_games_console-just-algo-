#include <iostream>
using namespace std;

int nr_div(int n)
{
    int nr = 2;
    for (int i = 2; i * i <= n; ++i)
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
    int count = 0;
    for (int i = a; i <= b; ++i)
        if(nr_div(i) == 3)
            count++;
    cout << count;
}

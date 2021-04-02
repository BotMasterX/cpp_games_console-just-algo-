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
   int maxx = -1;
   for (int i = a; i <= b; ++i)
    if(div(i) > maxx)
        maxx = div(i);

    for (int i = a; i <= b; ++i)
        if(div(i) == maxx)
            cout << i << ' ';

}

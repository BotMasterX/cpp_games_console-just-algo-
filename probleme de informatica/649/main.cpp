#include <iostream>
using namespace std;

int fact(int n)
{
    int nr = 0;
    int divizor = 2;
    if(n % divizor == 0)
    {
        nr++;
        while(n % divizor == 0)
            n = n / divizor;
        divizor = 3;
    }
    while(divizor * divizor <= n)
    {
        if(n % divizor == 0)
        {
            nr++;
            while(n % divizor == 0)
                n = n / divizor;
        }
        divizor += 2;
    }
    if(n)
        nr++;
    return nr;
}


int main()
{
    int a,b;
    cin >> a >> b;
    if(fact(a) > fact(b))
        cout << a;
    else
        cout << b;
}

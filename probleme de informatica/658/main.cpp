#include <iostream>
using namespace std;

bool is_prime(int n)
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

int nr_div(int n)
{
    int nr = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            if(is_prime(i))
                nr++;
            if(i * i < n && is_prime(n/i))
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
    {
        if(nr_div(i) > maxx)
            maxx = nr_div(i);
    }

    for (int i = a; i <= b; ++i)
        if(nr_div(i) == maxx)
            cout << i << ' ';


}

#include <iostream>
using namespace std;

int euclid (int a, int b)
{
    if(b == 0)
        return a;
    return (b, a % b);
}

int main()
{
    int n;
    int minn = 100000;
    int maxx = -1;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int valoare;
        cin >> valoare;
        if(maxx < valoare)
            maxx = valoare;
        if(minn > valoare)
            minn = valoare;
    }
    cout << minn / euclid(minn,maxx) << '/' << maxx / euclid(minn,maxx);
}

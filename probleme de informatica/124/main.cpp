#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = -1;
    int m = n;
    while(n)
    {
        if(maxx < n % 10)
            maxx = n % 10;
        n = n / 10;
    }
    int count = 0;
    while(m)
    {
        if(m % 10 == maxx)
            count++;
        m = m / 10;
    }
    cout << maxx << ' ' << count;
}

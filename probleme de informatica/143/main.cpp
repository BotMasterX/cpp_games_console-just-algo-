#include <iostream>
using namespace std;

int main()
{
    int n,b;
    cin >> n >> b;
    long long r = 0;
    long long p = 1;
    while(n)
    {
        r = r + n % b * p;
        p = p * 10;
        n = n / b;
    }
    cout << r;
}

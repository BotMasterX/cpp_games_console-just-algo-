#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cifre[11];
    for (int i = 0; i < 9; ++i)
        cifre[i] = 0;
    while(n)
    {
        cifre[n % 10]++;
        n = n / 10;
    }
    for (int i = 0; i < 9; ++i)
        if(cifre[i])
            cout << i << ' ';
}

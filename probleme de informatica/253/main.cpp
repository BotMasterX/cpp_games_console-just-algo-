#include <iostream>
using namespace std;

int s_div(int n)
{
    int suma = 0;
    for (int i = 1; i <= n / 2; ++i)
    {
        if(n % i == 0)
            suma = suma + i;
    }
    return suma;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if(s_div(i) == i)
            cout << i << ' ';
    }
}

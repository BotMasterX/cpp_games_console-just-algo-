#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x = i;
        int suma = 0;
        while(x)
        {
            suma = suma + (x % 10) * (x % 10) * (x % 10);
            x = x / 10;
        }
        if(suma == i)
            cout << i << ' ';
    }
}

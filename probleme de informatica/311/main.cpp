#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nr = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        int valoare = x;
        int suma = 0;
        while(x)
        {
            suma = suma + x % 10;
            x = x / 10;
        }
        if(suma == i)
            nr++;
    }
    cout << nr;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1, y = 1;
    if(n > 1)
    {
        cout << 1 << ' ' << 1 << ' ';
        int suma = 2;
        for (int i = 2; suma < n; ++i)
        {
            suma = x + y;
            x = y;
            y = suma;
            if(suma < n)
                cout << suma << ' ';
        }
    }
}

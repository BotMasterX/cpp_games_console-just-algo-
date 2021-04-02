#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1,y = 1;
    if(n == 1)
        cout << 1;
    else
    {
        int suma;
        for (int i = 2; i <= n; ++i)
        {
           suma = x + y;
            x = y;
            y = suma;
        }
        cout << suma;
    }
}

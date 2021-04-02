#include <iostream>
using namespace std;

int suma(int n)
{
    int s = 0;
    while(n)
    {
        s = n % 10;
        n = n / 10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            if(suma(a[i]) == suma(a[j]))
                cout << "(" << a[i] << "," << a[j] << ")" << endl;
        }
}

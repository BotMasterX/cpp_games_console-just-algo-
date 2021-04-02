#include <iostream>
using namespace std;

int suma(int n)
{
    int s = 0;
    while(n)
    {
        s += n % 10;
        n = n / 10;
    }
    return s;
}


int main()
{
    int a[1001];
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
        {
            if(suma(a[i]) % 2 == 0 && suma(a[j]) % 2 == 0 && a[i] < a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            else if(suma(a[i]) % 2 == 1 && suma(a[j]) % 2 == 1 && a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}

#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i+=2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int a[1001],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int prime[1001];
    int normale[1001];
    int poz1 = 1;
    int poz2 = 1;
    for (int i = 1; i <= n; ++i)
        if(prim(a[i]))
            prime[poz1++] = a[i];
        else
            normale[poz2++] = a[i];
    for (int i = 1;i < poz1 -1 ; ++i)
        for (int j = i +1; j < poz1; ++j)
            if(prime[i] > prime[j])
            {
                int aux = prime[i];
                prime[i] = prime[j];
                prime[j] = aux;
            }
    for(int i = 1; i < poz1; ++i)
        cout << prime[i] << ' ';

    for(int i = 1; i < poz2 - 1; ++i)
        for (int j = i + 1; j < poz2; ++j)
            if(normale[i] < normale[j])
            {
                int aux = normale[i];
                normale[i] = normale[j];
                normale[j] = aux;
            }

    for(int i = 1; i < poz2; ++i)
        cout << normale[i] << ' ';
}

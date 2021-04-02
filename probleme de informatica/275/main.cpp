#include <iostream>
using namespace std;

int s_div(int n)
{
    int suma = 0;
    for (int i = 1; i * 2 <= n; ++i)
        if(n % i == 0)
            suma = suma + i;
    return suma;
}

int main()
{
    int poz1 = 2,poz2 = 2;
    for (int i = 1; i <= 3; ++i)
    {
        bool ok = false;
        for (int j = poz1; !ok; ++j)
            for (int k = poz2; !ok; ++k)
            {
                if(s_div(j) == k && s_div(k) == j)
                {
                    poz1 = j + 1;
                    poz2 = k + 1;
                    ok = true;
                    cout << i << ' ' << j << '\n';
                }
            }
    }
}

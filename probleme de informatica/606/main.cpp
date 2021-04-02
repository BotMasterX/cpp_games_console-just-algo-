#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[1001];
    int b[1001];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= m; ++i)
        cin >> b[i];
    int i = 1, j = m;
    int c[2001];
    int poz = 1;
    while(i <= n && j >= 1)
    {
        if(a[i] < b[j])
        {
            if(a[i] % 2 == 0)
            {
                c[poz++] = a[i];
            }
            i++;
        }
        else
        {
            if(b[j] % 2 == 0)
            {
                c[poz++] = b[j];
            }
            j--;
        }

    }
    while(i <= n)
    {
        if(a[i] % 2 == 0)
        {
            c[poz++] = a[i];
        }
        i++;
    }
    while(j >= 1)
    {
        if(b[j] % 2 == 0)
        {
            c[poz++] = b[j];
        }
        j--;
    }
    for (int k = 1; k < poz; ++k)
        cout << c[k] << ' ';
}

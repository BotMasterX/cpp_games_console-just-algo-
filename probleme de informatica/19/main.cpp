#include <iostream>
using namespace std;

int main()
{
    int a[100],b[100],c[200];
    int n,m,poz = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; ++i)
        cin >> b[i];
    int i = 1,j = 1;
    while(i <= n && j <= m)
    {
        if(a[i] < b[j])
        {
            c[poz++] = a[i];
            i++;
        }
        else
        {
            c[poz++] = b[j];
            j++;
        }
    }

    while(i <= n)
    {
        c[poz++] = a[i];
        i++;
    }
    while(j <= m)
    {
        c[poz++] = b[j];
        j++;
    }

    for (int k = 1; k < poz; ++k)
        cout << c[k] << ' ';
}

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    bool sortat = false;
    while(!sortat)
    {
        sortat = true;
        for (int i = 1; i < n; ++i)
            if(a[i] > a[i + 1])
            {
                int aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                sortat = false;
            }
    }

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}

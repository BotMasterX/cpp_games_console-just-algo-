#include <iostream>
using namespace std;

int main()
{
    int a[100],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        int aux = a[i];
        int j = i;
        while(j > 1 && a[j - 1] > aux)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = aux;
    }
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}

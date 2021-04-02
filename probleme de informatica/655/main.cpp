#include <iostream>
using namespace std;

int main()
{
    int a[1001],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int stanga = 1;
    int dreapta = n;
    while(stanga < dreapta)
    {
        cout << a[stanga] << ' ' << a[dreapta] << ' ';
        stanga++;
        dreapta--;
    }
}

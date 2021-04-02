#include <iostream>
using namespace std;

int main()
{
    int n,k;
    int a[1000],b[1000];
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];
    int counter = 0;
    for(int i = 1; i <= n + 1 - k; ++i)
    {
        if(a[i] != b[i])
        {
            counter++;
            for (int j = i; j <= i + k - 1; ++j)
                a[j] = -a[j];
        }
    }
    cout << counter;
}

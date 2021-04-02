#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int minn = INT_MAX;
    int x,y;
    for (int i = 1; i < n; ++i)
        if(abs(a[i] - a[i + 1]) < minn)
        {
            minn = abs(a[i] - a[i + 1]);
            x = i;
            y = i + 1;
        }
    if(abs(a[1] - a[n]) < minn)
    {
        x = 1;
        y = n;
    }
    cout << x << ' ' << y;
}

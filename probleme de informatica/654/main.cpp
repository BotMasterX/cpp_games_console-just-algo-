#include <iostream>
using namespace std;

int main()
{
    int a[1001],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int minn = INT_MAX;
    int maxx = INT_MIN;
    for (int i = 1; i <= n; ++i)
    {
        if(a[i] < minn)
            minn = a[i];
        if(a[i] > maxx)
            maxx = a[i];
    }
    int count = 0;
    for (int i = 1; i <= n; ++i)
        if(a[i] == maxx - minn)
            count++;
    cout << count;
}

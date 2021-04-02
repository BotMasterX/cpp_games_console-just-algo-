#include <iostream>
using namespace std;

int euclid(int a,int b)
{
    if(b == 0)
        return a;
    return euclid(b,a % b);
}



int main()
{
    int n;
    cin >> n;
    int a[1001];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int count = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            if(euclid(a[i],a[j]) == 1)
                count++;
        }
    cout << count/2;
}

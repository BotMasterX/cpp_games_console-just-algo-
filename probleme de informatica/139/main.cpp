#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int maxx = -1;
    for (int i = 1; i <= n; ++i)
    {
        if(a[i] > maxx && prim(a[i]))
            maxx = a[i];
    }
    int count = 0;
    for (int i = 1; i <= n; ++i)
        if(a[i] == maxx)
            count++;
    cout << maxx << " apare de " << count;

}

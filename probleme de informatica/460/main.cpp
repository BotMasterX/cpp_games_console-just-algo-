#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numere[10000];
    for (int i = 1; i <= n; ++i)
        cin >> numere[i];
    int minn = INT_MAX;
    int maxx = INT_MIN;
    int min_poz,max_poz;
    for (int i = 1; i <= n; ++i)
    {
        if(maxx < numere[i])
        {
            max_poz = i;
            maxx = numere[i];
        }
        if(minn > numere[i])
        {
            min_poz = i;
            minn = numere[i];
        }
    }
    numere[min_poz] = maxx;
    numere[max_poz] = minn;
    for (int i = 1; i <= n; ++i)
        cout << numere[i] << ' ';
}

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");

int main()
{
    int n;
    fin >> n;
    int a[1001];
    for (int i = 1; i <= n; ++i)
        fin >> a[i];
    bool ok = false;
    while(!ok)
    {
        ok = true;
        for (int i = 1; i < n; ++i)
            if(a[i] == a[i + 1])
            {
                for (int j = i + 2; j <= n; ++j)
                    a[j - 1] = a[j];
                n--;
                for (int j = i + 1; j <= n; ++j)
                    a[j - 1] = a[j];
                n--;
                ok = false;
            }
    }
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

}

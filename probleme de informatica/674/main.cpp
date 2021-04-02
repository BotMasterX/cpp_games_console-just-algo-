#include <iostream>
using namespace std;

int main()
{
    int a[1001];
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    bool ok = true;
    for(int i = 1; i < n; ++i)
    {
        if(i == 1)
        {
            if(a[i] % 2 == a[i + 1] % 2)
                ok = false;
        }
        else if(a[i] % 2 == a[i + 1] % 2 && a[i] % 2 == a[i - 1] % 2)
            ok = false;
    }
    if(ok)
        cout << "DA";
    else
        cout << "NU";
}

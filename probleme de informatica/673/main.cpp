#include <iostream>
using namespace std;

int main()
{
    int a[1001],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    bool ok = false;
    for(int i = 2; i < n; ++i)
        if(a[i -1] % 2 == a[i] % 2 && a[i + 1] % 2 == a[i] % 2)
            ok = true;
    if(ok)
        cout << "DA";
    else
        cout << "NU";


}


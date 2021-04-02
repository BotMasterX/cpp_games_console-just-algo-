#include <iostream>
using namespace std;

int main()
{
    int a[1001],n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            if(a[i] < a[j] && (a[i] + a[j]) % n == 0)
                cout << "(" << a[i] << "," << a[j] << ")" << '\n';
        }
}

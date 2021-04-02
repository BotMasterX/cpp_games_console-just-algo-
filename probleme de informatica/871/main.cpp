#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool exista = false;

    for (int i = 1; i <= n/2; ++i)
        for (int j = 1; j <= n/2; ++j)
            for (int k = 1; k <= n/2; ++k)
            {
                if(i < j && j < k && i + j + k == n && n % i == 0 && n % j == 0 && n % k == 0)
                {
                    exista = true;
                    cout << i << ' ' << j << ' ' << k << '\n';
                }
            }
    if(!exista)
        cout << "nu exista";
}

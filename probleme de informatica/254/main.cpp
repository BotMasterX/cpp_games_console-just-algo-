#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;

    for (int i = 1; i <= p; ++i)
        for (int j = 1; j <= p; ++j)
            for (int k = 1; k <= p; ++k)
            {
                if(i + j + k == p && i + j > k && i + k > j && j + k > i)
                    cout << i << ' ' << j << ' ' << k << '\n';
            }
}

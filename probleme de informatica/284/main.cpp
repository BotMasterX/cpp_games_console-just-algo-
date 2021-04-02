#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n/2; ++i)
        for (int j = 1; j < n/2; ++j)
            {
                if(i + j > k && i + k > j && j + k > i && i + j + k == n)
                    cout << i << ' ' << j << ' ' << k << '\n';
            }
}

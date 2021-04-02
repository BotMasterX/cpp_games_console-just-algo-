#include <iostream>
using namespace std;


int main()
{
    int k;
    cin >> k;
    for (int i = 1; i <= k; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            if(i * i - j * j == k)
                cout << i << ' ' << j << '\n';
        }
    }
}

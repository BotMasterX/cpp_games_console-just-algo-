#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c;
    int nr = 0;
    cin >> c;
    for (int i = 1; i <= n; ++i)
    {
        int x = i;
        while(x)
        {
            if(x % 10 == c)
                nr++;
            x = x / 10;
        }
    }
    cout << nr;
}

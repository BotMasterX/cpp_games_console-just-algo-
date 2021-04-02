#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = -1;
    int nr = 0;
    for (int i = 1; i <= n; ++i)
    {
        int valoare;
        cin >> valoare;
        if(x == -1)
            x = valoare;
        int oglindit = 0;
        while(valoare)
        {
            oglindit = oglindit * 10 + valoare % 10;
            valoare = valoare / 10;
        }
        if(oglindit == x)
            nr++;
    }
    cout << nr;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    int maxim = -1;
    int minim = 10;

    cin >> n;
    while(n)
    {
        if(n % 10 > maxim)
            maxim = n % 10;
        if(n % 10 < minim)
            minim = n % 10;
        n = n / 10;
    }
    cout << maxim << ' ' << minim;
}

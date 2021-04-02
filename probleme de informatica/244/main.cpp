#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int nr = 0;
    while(a && b)
    {
        if(a % 10 == b % 10)
            nr++;
        a = a / 10;
        b = b / 10;
    }
    cout << nr;
}

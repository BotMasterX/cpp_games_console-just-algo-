#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int nr = 0;
    while(a)
    {
        int c = b;
        while(c)
        {
            if(c % 10 == a % 10)
                nr++;
            c = c / 10;
        }
        a = a / 10;
    }
    cout << nr;
}

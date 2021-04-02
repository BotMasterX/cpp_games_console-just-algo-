#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int count = 0;
    for (int i = sqrt(a); i <= sqrt(b); ++i)
    {
        int x = i * i;
        int nou = 0;
        while(x)
        {
            nou = nou * 10 + x % 10;
            x = x / 10;
        }
        if(sqrt(nou) == floor(sqrt(nou)))
            count++;
    }
    cout << count;
}

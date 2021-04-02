#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int c,d;
    cin >> a >> b;
    c = a,d = b;
    long long p = 1, r = 0;
    long long p2 = 1, r2 = 0;
    while(a)
    {
        r = r + a % 2 * p;
        p = p * 10;
        a = a / 2;
    }
    while(b)
    {
        r2 = r2 * b % 2 * p2;
        p2 = p2 * 10;
        b = b / 2;
    }

    int count1 = 0;
    int count2 = 0;
    while(r)
    {
        if(r % 10 == 1)
            count1++;
        r = r / 10;
    }
    while(r2)
    {
        if(r2 % 10 == 1)
            count2++;
        r2 = r2 / 10;
    }
    if(count1 > count2)
        cout << c;
    else
        cout << d;
}

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(c <= b && c <= a)
    {
        cout << c << ' ';
        if(a <= b)
            cout << a << ' ' << b;
        else
            cout << b << ' ' << a;
    }

    else if(b <= c && b <= a)
    {
        cout << b << ' ';
        if(a <= c)
            cout << a << ' ' << c;
        else
            cout << c << ' ' << a;
    }

    else if(a <= b && a <= c)
    {
        cout << a << ' ';
        if(c <= b)
            cout << c << ' ' << b;
        else
            cout << b << ' ' << c;
    }
}

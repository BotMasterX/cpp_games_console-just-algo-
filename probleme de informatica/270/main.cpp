#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    while(a != b || a != c || b != c)
    {
        int minn = a;
        if(minn > b)
            b = minn;
        if(minn > c)
            c = minn;
        if(a != minn)
            a = a - minn;
        if(b != minn)
            b = b - minn;
        if(c != minn)
            c = c - minn;
    }
    cout << a;
}

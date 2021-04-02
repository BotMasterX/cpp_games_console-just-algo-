#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxx = 0;
    int minn = 10000;

    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if(maxx < x)
            maxx = x;
        if(minn > x)
            minn = x;
    }

    int oglindit = 0;
    while(minn)
    {
        oglindit = oglindit * 10 + minn % 10;
        minn = minn / 10;
    }

    while(oglindit)
    {
        maxx = maxx * 10 + oglindit % 10;
        oglindit = oglindit / 10;
    }
    cout << maxx;
}

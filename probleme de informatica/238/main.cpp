#include <iostream>
using namespace std;

int main()
{
    int maxx = -1;
    int x = -1;
    while(x != 0)
    {
        cin >> x;
        if(x != 0)
            maxx = max(maxx,x);
    }
    cout << maxx;
}

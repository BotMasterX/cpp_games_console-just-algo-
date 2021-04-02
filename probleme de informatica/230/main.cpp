#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int maxx = max(a,b);
    int minn = min(a,b);

    if(maxx % minn == 0)
        cout << maxx/minn;
    else
        cout << maxx/minn;

}

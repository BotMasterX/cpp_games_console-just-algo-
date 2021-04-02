#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if(y % x == 0)
        cout << y/x;
    else
        cout << y/x + 1;
}

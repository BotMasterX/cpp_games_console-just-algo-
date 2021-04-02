#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int delta = 1 + 4 * n;
    if(sqrt(delta) == floor(sqrt(delta)))
    {
        int x = (-1 + sqrt(delta))/2;
        cout << x << ' ' << x + 1;
    }
    else
        cout << "IMPOSIBIL";
}

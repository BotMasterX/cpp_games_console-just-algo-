#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = sqrt(n);
    if(k * k == n)
        cout << k;
    else if(n - k * k <= k + 1)
        cout << n - k * k;
    else
        cout << k + 1;
}

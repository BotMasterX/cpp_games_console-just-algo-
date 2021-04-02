#include <iostream>
using namespace std;


bool putere(int n)
{
    int element = 1;
    while(element <= n)
    {
        element = element * 2;
    }

    if(element/2 == n)
        return true;
    return false;
}

int main()
{
    int a,b,n;
    int count = 0;
    cin >> n >> a >> b;
    for (int i = a; i <= b && count < n; ++i)
        if(putere(i)){
            cout << i << ' ';
            count++;
        }
}

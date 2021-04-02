#include <iostream>
using namespace std;

int prim(int n)
{
    if(n == 3)
        return n;
    for (int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return 0;
    return n;
}


int main()
{
    int n;
    cin >> n;
    int nr1 = 3,nr2 = 5;
    while(n)
    {
        while(prim(nr2) == 0)
            nr2 = nr2 + 2;
        nr2 = prim(nr2);
        cout << nr1 << ' ' << nr2 << '\n';
        nr1 = nr2;
        nr2 = nr1 + 2;
        n--;
    }
}

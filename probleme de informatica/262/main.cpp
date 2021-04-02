#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i+=2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int nr1 = 3;
    int nr2 = 5;
    while(nr2 <= n && nr1 <= n)
    {
        cout << nr1 << ' ' << nr2 << '\n';
        while(true)
        {
            nr1 = nr2;
            nr2+=2;
            while(!prim(nr2))
                nr2+=2;
            if(nr2 - nr1 == 2)
                break;
        }
    }
}

#include <iostream>
using namespace std;


bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; ++i)
        if(n % i == 0)
            return false;
    return true;
}

int cmmdc(int a, int b)
{
    if(b == 0)
        return a;
    return cmmdc(b,a%b);
}



int main()
{
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
        for (int j = a; j <= b; ++j)
        {
            if(cmmdc(i,j) == 1 && !prim(i) && !prim(j) && i < j)
                cout << i << ' ' << j << '\n';
        }
}

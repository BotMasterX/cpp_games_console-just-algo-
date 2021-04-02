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
    for (int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int a,b;
    int suma = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
        if(prim(i))
            suma = suma + i;
    }
    cout << suma;
}

#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 ==0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    bool ok = false;
    for (int i = 2; i <= n/2; ++i)
    {
        if(prim(i) && prim(n - i)){
            cout << i << ' ' << n - i << '\n';
            ok = true;
        }
    }
    if(!ok)
        cout << "Imposibil";
}

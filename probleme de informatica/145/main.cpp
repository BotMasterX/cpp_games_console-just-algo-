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
    int x = -1;
    while(!prim(x))
    {
        cin >> x;
        if(!prim(x))
            cout << "nu este prim" << endl;
    }

}

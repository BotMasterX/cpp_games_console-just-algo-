#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("p.in");

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i +=2)
        if(n % i == 0)
            return false;
    return true;
}

bool aproape_prim(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if(prim(i) && prim(n / i) && i != n / i && n % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    fin >> n;
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        fin >> x;
        if(aproape_prim(x)){
            count++;
        }
    }
    cout << count;

}

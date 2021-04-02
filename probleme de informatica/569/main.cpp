#include <iostream>
using namespace std;


int fibo(int numar)
{
    int a = 1,b = 1,c;
    while(a + b <= numar)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int main()
{
    int n;
    cin >> n;

    while(n)
    {
        cout << fibo(n) << ' ';
        n = n - fibo(n);
    }
}

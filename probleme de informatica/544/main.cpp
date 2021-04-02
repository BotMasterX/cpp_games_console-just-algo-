#include <iostream>
using namespace std;


bool fibo(int numar)
{
    int a = 1,b = 1,c;
    while(a + b <= numar)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if(numar == b)
        return true;
    return false;
}

int main()
{
    int a,b;
    int count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
        if(fibo(i))
            count++;
    cout << count;
}

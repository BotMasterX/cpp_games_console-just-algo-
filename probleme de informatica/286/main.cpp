#include <iostream>
using namespace std;

int cifra(int n)
{

    while(n > 9)
    {
        int suma = 0;
        while(n)
        {
            suma = suma + n % 10;
            n = n / 10;
        }
        n = suma;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    int x;
    cin >> x;
    for (int i = 1; counter < n; ++i)
    {
        if(cifra(i) == x)
        {
            cout << i << ' ';
            counter++;
        }
    }
}

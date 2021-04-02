#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int par = 0;
    int impar = 0;

    while(n)
    {
        int cifra = n % 10;
        if(cifra % 2 == 0)
            par++;
        else
            impar++;
        n = n / 10;
    }
    cout << par << ' ' << impar;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool crescator = true;
    int cifra = n % 10;
    n = n / 10;
    while(n)
    {
        if(cifra >= n % 10)
            crescator = false;
        cifra = n % 10;
        n = n / 10;
    }
    if(crescator)
        cout << "DA";
    else
        cout << "NU";

}


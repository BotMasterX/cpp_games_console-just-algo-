#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool cresc = true;
    bool descr = true;

    while(n > 9)
    {
        int cifra = n % 10;
        if(cifra >= n / 10 % 10)
            descr = false;
        else
            cresc = false;
        n = n / 10;
    }

    if(descr)
        cout << "descrescator";
    else if(cresc)
        cout << "crescator";
    else
        cout << "neordonate";
}

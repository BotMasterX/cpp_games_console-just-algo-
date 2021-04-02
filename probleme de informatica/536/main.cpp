#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    bool ok = true;
    while(n)
    {
        if(n % 10 >= q)
            ok = false;
        n = n / 10;
    }
    if(ok)
        cout << "DA";
    else
        cout << "NU";
}

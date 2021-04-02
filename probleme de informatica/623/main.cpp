#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ok = false;
    if(a + b > c && b + c > a && a + c > b)
        ok = true;
    if(ok)
        cout << "DA";
    else
        cout << "NU";
}

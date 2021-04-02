#include <iostream>
using namespace std;

int main()
{
    int a,b,x;
    cin >> a >> b >> x;
    if(a <= x && x <= b)
        cout << "DA";
    else
        cout << "NU";
}

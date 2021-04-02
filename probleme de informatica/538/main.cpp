#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    int putere1 = 1, putere2 = 1;

    while(putere1 <= n)
        putere1 = putere1 * 2;
    while(putere2 <= x)
        putere2 = putere2 * 2;
    if(putere1 == putere2)
        cout << "DA";
    else
        cout << "NU";

}

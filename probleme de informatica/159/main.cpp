#include <iostream>
using namespace std;

int main()
{
    int a,n;
    cin >> a >> n;
    int cifra = a % 10;
    if(n % 4 == 1)
        cout << cifra;
    else if(n % 4 == 2)
        cout << a * a % 10 ;
    else if(n % 4 == 3)
        cout << a * a * a % 10;
    else
        cout << a * a * a * a % 10;
}

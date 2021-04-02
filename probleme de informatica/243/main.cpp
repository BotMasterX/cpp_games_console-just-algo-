#include <iostream>
using namespace std;

int main()
{
    int a,l;
    cin >> a >> l;
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0 && l == 2)
        cout << 29;
    else if(l == 1 || l == 3 || l == 5 || l == 7 || l == 8 || l == 10 || l == 12)
        cout << 31;
    else
        cout << 30;
}

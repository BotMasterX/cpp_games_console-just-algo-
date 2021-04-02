#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nr = 1;
    if(n >= 1)
        cout << 1 << ' ';
    if(n >= 2)
        cout << 1 << ' ';
    int pas = 2;
    nr = 2;
    for (int i = 3; i <= n; ++i)
    {
        cout << nr << ' ';
        if(pas == nr)
        {
            pas = pas + 1;
            nr = 1;
        }
        else
            nr = nr + 1;
    }
}

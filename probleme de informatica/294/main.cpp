#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(true)
    {
        n++;
        int x = n;
        int oglindit = 0;
        while(x)
        {
            oglindit = oglindit * 10 + x % 10;
            x = x / 10;
        }
        if(oglindit == n)
        {
            cout << n;
            break;
        }
    }
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(1)
    {
        n++;
        int oglindit  = 0;
        int m = n;
        while(m)
        {
            oglindit = oglindit * 10 + m % 10;
            m = m / 10;
        }
        if(oglindit == n)
        {
            cout << n;
            break;
        }
    }
}

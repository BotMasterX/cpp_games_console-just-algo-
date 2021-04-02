#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = 0;
    int c;
    for (int i = 0; i <= 9; ++i)
    {
        int x = n;
        int counter = 0;
        while(x)
        {
            if(x % 10 == i)
                counter++;
            x = x / 10;
        }
        if(counter > maxx)
        {
           maxx = counter;
           c = i;
        }
    }
    cout << c << ' ' << maxx;
}

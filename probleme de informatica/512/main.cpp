#include <iostream>
using namespace std;

int main()
{
    int a,b,c = -1;
    cin >> a >> b;

    while(c != 0)
    {
        cin >> c;
        if(c != 0)
        {
            int nr = a;
            int suma = 0;
            while(nr)
            {
                suma = suma + nr % 10;
                nr = nr / 10;
            }
            if(a / suma == b && a % suma == c)
                cout << a << ' ' << b << ' ' << c << '\n';
            a = b;
            b = c;
        }


    }
}

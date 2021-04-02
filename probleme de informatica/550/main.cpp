#include <iostream>
using namespace std;

int main()
{
    int s,a,b,c;
    cin >> s >> a >> b >> c;

    for (int i = 0; i <= s/a ; ++i)
        for (int j = 0; j <= s/b; ++j)
            for (int k = 0; k <= s/c; ++k)
            {
                if(a * i + b * j + c * k == s)
                    cout << a << " de " << i <<' '<< b << " de " << j<<' ' << c << " de " << k << '\n';
            }
}

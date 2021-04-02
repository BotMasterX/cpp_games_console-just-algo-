#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = i + 1; j <= n; ++j)
        {
            if(i < j)
            {
                int valoare1 = i;
                int valoare2 = j;
                int suma1 = 0;
                int suma2 = 0;
                while(valoare1)
                {
                    suma1 = suma1 + valoare1 % 10;
                    valoare1 = valoare1 / 10;
                }
                while(valoare2)
                {
                    suma2 = suma2 + valoare2 % 10;
                    valoare2 = valoare2 / 10;
                }
                if(suma1 == suma2)
                    cout << i << ' ' << j << '\n';
            }
        }
}

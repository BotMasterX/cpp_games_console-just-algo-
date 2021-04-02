#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int valoare;
        cin >> valoare;
        bool exista = false;
        for (int i = 1; i * i <= valoare; ++i)
        {
            if(valoare % i == 0)
            {
                if(i % 2 == 0)
                {
                    exista = true;
                    cout << i << ' ';
                }
                if( i * i < valoare && valoare/i % 2 == 0)
                    cout << valoare/i << ' ';
            }
        }
        if(exista == false)
            cout << "nu are";
        cout << '\n';
    }
}

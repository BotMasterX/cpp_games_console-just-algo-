#include <iostream>
using namespace std;

void factori(int n)
{
    int div = 2;
    int putere = 0;
    while(n % div == 0)
    {
        putere++;
        n = n / div;
    }
    if(putere)
        cout << div << " la puterea " << putere << endl;
    div++;
    while(div * div <= n)
    {
        putere = 0;
        while(n % div == 0)
        {
            putere++;
            n = n / div;
        }
        if(putere)
            cout << div << " la puterea " << putere << endl;
        div = div + 2;
    }

    if(n > 1)
        cout << n << " la puterea " << 1 << endl;
}


int main()
{
    int n;
    cin >> n;
    factori(n);
}

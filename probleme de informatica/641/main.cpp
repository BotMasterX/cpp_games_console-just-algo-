#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    bool paritate = false;
    if(a % 2 == b % 2)
        paritate = true;
    int cifre_pare = 0;
    int cifre_impare = 0;

    if(paritate)
    {
        do
        {
            int cifra = a % 10;
            if(cifra % 2 == 0)
                cifre_pare++;
            a = a / 10;
        }while(a == 0);

        do
        {
            int cifra = b % 10;
            if(cifra % 2 == 0)
                cifre_pare++;
            b = b / 10;
        }while(b == 0);

        cout << cifre_pare;
    }
    else
    {
        do
        {
            int cifra = a % 10;
            if(cifra % 2 == 1)
                cifre_impare++;
            a = a / 10;
        }while(a == 0);

        do
        {
            int cifra = b % 10;
            if(cifra % 2 == 1)
                cifre_impare++;
            b = b / 10;
        }while(b == 0);

        cout << cifre_impare;
    }
}

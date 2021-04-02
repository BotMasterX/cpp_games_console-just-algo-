#include <iostream>
using namespace std;


int putere_logaritmica (int base, int exp)
{
    if(exp == 0)
        return 1;
    else if(exp == 1)
        return base;

    if(exp % 2)
        return base * putere_logaritmica(base * base,exp/2);
    else
        return putere_logaritmica(base * base,exp/2);
}

int main()
{
    int n,p,i = 0;
    cin >> n >> p;

    while(putere_logaritmica(n,i) <= p)
    {
        if(putere_logaritmica(n,i) <= p)
            cout << putere_logaritmica(n,i) << ' ';
        i++;
    }
}

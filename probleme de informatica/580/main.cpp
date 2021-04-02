#include <iostream>
using namespace std;
int numere[10000],divizori[10000];

int puterea_log(int numar,int baza)
{
    if(baza == 0)
        return 1;
    if(baza == 1)
        return numar;

    if(baza % 2 == 1)
        return baza * puterea_log(numar* numar,baza/2);
    return puterea_log(numar * numar,baza/2);
}

void descompunere(int n)
{
    int div = 2;
    int putere = 0;

    while(n % div == 0)
    {
        n = n / div;
        putere++;
    }
    if(putere)
        divizori[div] = max(putere,divizori[div]);
    div = 3;
    putere = 0;
    while(div * div <= n)
    {
        putere = 0;
        while(n % div == 0)
        {
            n = n / div;
            putere++;
        }
        if(putere)
            divizori[div] = max(putere,divizori[div]);
        div +=2;
    }
    if(n > 1)
        divizori[n] = max(1,divizori[n]);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> numere[i];
        descompunere(numere[i]);
    }
    int prod = 1;
    for (int i = 2; i <= 9999; ++i)
        if(divizori[i])
            prod *= puterea_log(i,divizori[i]);
    cout << prod;

}

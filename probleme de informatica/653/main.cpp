#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int putere = 0;
    int divizor = 2;
    int putere_maxx = 0;
    int maxx = 0;

    while(n % divizor == 0)
    {
        putere++;
        n = n / divizor;
    }
    if(putere >= putere_maxx)
    {
        putere_maxx = putere;
        maxx = divizor;
    }
    divizor = 3;
    while(divizor * divizor <= n)
    {
        putere = 0;
        while(n % divizor == 0)
        {
            n = n / divizor;
            putere++;
        }
        if(putere >= putere_maxx)
        {
            putere_maxx = putere;
            maxx = divizor;
        }
        divizor = divizor + 2;
    }

    if(n)
    {
        if(1 >= putere_maxx)
        {
            maxx = n;
        }
    }
    cout << maxx;

}

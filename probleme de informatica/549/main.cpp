#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int maxx = -1;
    int pasi = 1;
    while(n)
    {
        int nou = m;
        int pas_nou = 1;
        int nr_nou = 0;
        while(nou)
        {
            if(pasi != pas_nou)
                nr_nou = nr_nou * 10 + nou % 10;
            pas_nou++;
            nou = nou / 10;
        }
        int oglindit = 0;
        while(nr_nou)
        {
            oglindit = oglindit * 10 + nr_nou % 10;
            nr_nou = nr_nou / 10;
        }
        if(maxx < oglindit)
            maxx = oglindit;
        n = n / 10;
        pasi++;
    }
    cout << maxx;

}

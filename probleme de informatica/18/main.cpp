#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n,k;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> k;

    int stanga = 1;
    int pasi = 0;
    int dreapta = n;
    while(stanga <= dreapta)
    {
        pasi++;
        int mijloc = (stanga + dreapta)/2;
        if(a[mijloc] == k)
        {
            cout << "DA" << ' ' << pasi;
            return 0;
        }
        else if(a[mijloc] > k)
        {
            dreapta = mijloc - 1;
        }
        else
        {
            stanga = mijloc + 1;
        }
    }
    cout << pasi;


}

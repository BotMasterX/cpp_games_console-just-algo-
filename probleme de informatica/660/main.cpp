#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int distanta = 2 * n + 1;
    int numar = 1;
    while(numar <= n)
    {
        for (int i = 1; i <= numar; ++i)
            cout << '*';
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        cout << '\n';
        distanta--;
        numar++;
    }
    numar = n;
    distanta = n;
    while(numar >= 1)
    {
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        for (int i = 1; i <= numar; ++i)
            cout << '*';
        cout << '\n';
        distanta++;
        numar--;
    }
}

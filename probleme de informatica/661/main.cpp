#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int distanta = n - 1;
    int aparitii = 1;
    int numar = 1;
    while(numar < n)
    {
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        for (int i = 1; i <= aparitii; ++i)
            cout << '#';
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        cout << '\n';
        numar++;
        aparitii = aparitii + 2;
        distanta--;
    }

    while(numar >= 1)
    {
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        for (int i = 1; i <= aparitii; ++i)
            cout << '#';
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        cout << '\n';
        numar--;
        aparitii = aparitii - 2;
        distanta++;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int distanta = n - 1;
    int pasi = 1;
    int apariti = 1;

    while(pasi <= n)
    {
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        for (int i = 1; i <= apariti; ++i)
            cout << '*';
        for (int i = 1; i <= distanta; ++i)
            cout << ' ';
        cout << '\n';
        apariti = apariti + 2;
        pasi++;
        distanta--;
    }
}

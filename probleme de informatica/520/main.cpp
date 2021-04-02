#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numere[200];
    for (int i = 1; i <= n; ++i)
        cin >> numere[i];
    while(n)
    {
        int suma = 0;
        for (int i = 1; i <= n; ++i)
            suma += numere[i];
        n--;
        cout << suma << '\n';
    }
}

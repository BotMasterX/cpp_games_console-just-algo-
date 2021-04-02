#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>cifre;
    while(n--)
    {
        cifre.push_back(n % 10);
        n = n / 10;
    }
    int suma = 0;
    sort(cifre.begin(),cifre.end());
    do
    {
        int putere = 1;
        int numar = 0;
        for(int i = cifre.size() - 1; i >= 0; --i)
        {
            numar = numar + putere * cifre[i];
            putere = putere * 10;
        }
        cout << numar << endl;
        suma += numar;
    }while(next_permutation(cifre.begin(),cifre.end()));
    cout << suma;

}

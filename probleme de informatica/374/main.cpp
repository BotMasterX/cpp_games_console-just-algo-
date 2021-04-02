#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int valoare;
    cin >> valoare;
    int suma = 0;
    while(valoare)
    {
        suma = suma + valoare % 10;
        valoare = valoare / 10;
    }
    for (int i = 1; i < n; ++i)
    {
        cin >> valoare;
        int x = valoare;
        int s = 0;
        while(valoare)
        {
            s = s + valoare % 10;
            valoare = valoare / 10;
        }
        if(s == suma)
            cout << x << ' ';
    }
}

#include <iostream>
using namespace std;

int main()
{
   int numere[200];
   int n;
   cin >> n;
   for (int i = 1; i <= n; ++i)
    cin >> numere[i];

   for (int i = 1; i < n; ++i)
    for (int j = i + 1; j <= n; ++j)
    {
        if(numere[i] > numere[j])
        {
            int aux = numere[i];
            numere[i] = numere[j];
            numere[j] = aux;
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << numere[i] << ' ';
}

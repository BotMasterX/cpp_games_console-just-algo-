#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numere[200];
    for (int i = 1; i <= n; ++i)
        cin >> numere[i];
    int pos = 1;;
    while(pos <= n)
    {
        if(pos == 1 || numere[pos] >= numere[pos - 1])
            pos++;
        else
        {
            int aux = numere[pos];
            numere[pos] = numere[pos - 1];
            numere[pos - 1] = aux;
            pos--;
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << numere[i] << ' ';
}

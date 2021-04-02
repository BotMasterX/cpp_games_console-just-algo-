#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int suma = 0;
    for (int i = 2; suma < n; i += 2)
    {
        suma += i;
        if(suma < n)
        cout << i << ' ';
    }
}

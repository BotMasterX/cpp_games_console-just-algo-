#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n > 9)
    {
        int suma = 0;
        while(n)
        {
            suma = suma + n % 10;
            n = n / 10;
        }
        n = suma;
    }
    cout << n;

}

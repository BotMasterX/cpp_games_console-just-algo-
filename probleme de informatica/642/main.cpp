#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int suma = 0;
    int nou = 0;
    while(n)
    {
        suma = suma + n % 10;
        n = n / 10;
    }
    while(suma)
    {
        nou = nou * 10 + suma % 10;
        suma = suma / 10;
    }
    cout << nou;
}

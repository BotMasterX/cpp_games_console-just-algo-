#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    int suma = 0;
    int elemente = 0;
    while(x != 0)
    {
        cin >> x;
        if(x)
        {
            suma = suma + x;
            elemente++;
        }
    }
    cout << double(suma)/double(elemente);
}

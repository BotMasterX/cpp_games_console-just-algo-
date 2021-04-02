#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int suma = 0;
    int elemente = 0;
    for (int i = a; i <= b; ++i)
    {
        int oglindit = 0;
        int n = i;

        while(n)
        {
            oglindit = oglindit * 10 + n % 10;
            n = n / 10;
        }

        if(oglindit == i)
        {
            suma = suma + i;
            elemente = elemente + 1;
        }
    }

    cout << float(suma)/float(elemente);
}

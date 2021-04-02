#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int nr = 0;
    for (int i = a; i <= b; ++i)
    {
        int oglindit = 0;
        int numar = i;
        int numar_aux = i;
        while(numar_aux)
        {
            oglindit = oglindit * 10 + numar_aux % 10;
            numar_aux = numar_aux / 10;
        }
        if(numar == oglindit)
            nr++;
    }
}

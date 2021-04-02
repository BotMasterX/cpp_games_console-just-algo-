#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = 0;
    int dreapta;
    int distanta = 0;
    int indice = 0;
    while(n--)
    {
        indice++;
        int x;
        cin >> x;
        if(x== 0)
        {
            distanta++;
            if(distanta > maxx)
            {
                maxx = distanta;
                dreapta = indice;
            }
        }
        else
            distanta = 0;
    }
    cout << dreapta - maxx + 1 << ' ' << dreapta;

}

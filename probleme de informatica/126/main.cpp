#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int grup = 1;
    int element = 1;
    while(grup <= n)
    {
        bool exista = false;
        while(!exista)
        {
            if((element + element + 1) % n == 0)
            {
                exista = true;
                cout << element << ' ' << element + 1 << '\n';
            }
            element++;
        }
        grup++;
    }
}

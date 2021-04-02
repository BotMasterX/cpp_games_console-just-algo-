#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numere[200];
    for (int i = 1; i <= n; ++i)
        cin >> numere[i];
    int element;
    cin >> element;
    int stanga = 1;
    int dreapta = n;
    bool gasit = false;
    while(stanga <= dreapta && gasit == false)
    {
        int mijloc = (stanga + dreapta)/2;
        if(numere[mijloc] == element)
        {
            gasit = true;
        }
        else if(numere[mijloc] > element)
        {
            dreapta = mijloc - 1;
        }
        else
            stanga = mijloc + 1;
    }
    if(gasit)
        cout << "este";
    else
        cout << "nu este";
}

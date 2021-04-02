#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int gasit[1000] = {0};
    int frecventa[1000] = {0};
    int x;
    while(fin >> x)
    {
        if(x > 999)
            frecventa[x % 1000] = 1;
        else if(x > 99 && x < 1000)
            gasit[x] = 1;
    }
    for (int i = 100; i < 1000; ++i)
        if(gasit[i] && frecventa[i])
            cout << i << '\n';
}

#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("aolo.out");

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= 9 - x; ++i)
    {
        int numar = i;
        while(numar % 10 + x <= 9)
        {
            numar = numar * 10 + (numar % 10 + x);
            fout << numar << '\n';
        }
    }
}

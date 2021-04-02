#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n;
    cin >> n;
    int valoare;
    while(fin >> valoare)
    {
        if(valoare % 10 == 0)
            cout << valoare << ' ';
    }
}

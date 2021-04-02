#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("lungime.in");
ofstream fout("lungime.out");

int main()
{
    int start[10000],finish[10000];
    int lungime_maxx = 0;
    int n;
    fin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int numar;
        fin >> numar;
        if(start[numar] == 0)
        {
            start[numar] = finish[numar] = i;
        }
        else{
            finish[numar] = i;
            lungime_maxx = max(lungime_maxx,finish[numar] - start[numar] + 1);
            start[numar] = finish[numar] = i;
        }
    }
    fout << lungime_maxx;
}

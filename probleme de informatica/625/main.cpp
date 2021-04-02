#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int main()
{
    int n,inceput[101] = {0},sfarsit[100] = {0};
    fin >> n;
    int x;
    int indice = 0;
    while(fin >> x)
    {
        indice++;
        if(!inceput[x])
        {
            inceput[x] = indice;
        }
        sfarsit[x] = indice;
    }
    int maxx = 0;
    for (int i = 0; i < 100; ++i)
    {
        if(sfarsit[i] - inceput[i] + 1 > maxx)
            maxx = sfarsit[i] - inceput[i] + 1;
    }
    fout << maxx;
}

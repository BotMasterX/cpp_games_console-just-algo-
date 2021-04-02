#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main()
{
    int n,m;
    fin >> n >> m;
    int start = 0, finish = 0;
    while(n > 0)
    {
        int valoare;
        fin >> valoare;
        if(start == 0)
            start = valoare;
        finish = valoare;
        n--;
    }
    int curent,precedent;
    fin >> curent;
    m--;
    curent = precedent;
    int poz = 2;
    bool este = false;
    while(m--)
    {
        fin >> curent;
        if(precedent < start && curent > finish)
        {
            cout << poz;
            este = true;
        }
        precedent = curent;
        poz++;
    }
    if(este == false)
        cout << "imposibil";
}

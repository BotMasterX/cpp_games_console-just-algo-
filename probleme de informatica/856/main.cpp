#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");
int main()
{
    int indice = 0;
    int primu_indice[10] = {0};
    int ultimul_indice[10] = {0};
    int x;
    while(fin >> x)
    {
        indice++;
        if(primu_indice[x] == 0)
            primu_indice[x] = indice;
        ultimul_indice[x] = indice;
    }
    int maxx = -1;
    for (int i = 0; i <= 9; ++i)
        if(ultimul_indice[i] - primu_indice[i] + 1 > maxx)
            maxx = ultimul_indice[i] - primu_indice[i] + 1;
    cout << maxx << '\n';
    for (int i = 0; i <= 9; ++i)
        if(ultimul_indice[i] - primu_indice[i] + 1 == maxx)
            cout << i << ' ';
}

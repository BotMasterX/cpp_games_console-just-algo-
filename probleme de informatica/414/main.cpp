#include <iostream>
using namespace std;

int cmmdc(int a,int b)
{
    if(b == 0)
        return a;
    return cmmdc(b,a % b);
}

int main()
{
   int mat[100][100];
   int n,m;
   cin >> n >> m;
   for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> mat[i][j];
   int coloane[100];
   int linie[100];
   int poz_linie = 1;
   int poz_coloana = 1;
   for (int i = 1; i <= n; ++i)
   {
       int suma = 0;
       for (int j = 1; j <= m; ++j)
        suma += mat[i][j];
       linie[poz_linie++] = suma;
   }
   for (int j = 1; j <= m; ++j)
   {
       int produs = 1;
       for (int i = 1; i <= n; ++i)
        produs *= mat[i][j];
       coloane[poz_coloana++] = produs;
   }

   for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
    {
        if(mat[i][j] == cmmdc(coloane[j],linie[i]))
            cout << mat[i][j] << '\n';
    }
}

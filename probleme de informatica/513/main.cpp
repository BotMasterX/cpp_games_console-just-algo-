#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; ++i)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
   int k;
   cin >> k;
   int limita_stanga,limita_dreapta;
   int putere = 1;
   for (int i = 1; i <= k; ++i)
    putere = putere * 10;
   limita_dreapta = putere;
   limita_stanga = putere / 10;

   for (int i = limita_stanga; i < limita_dreapta; ++i)
   {
       if(prim(i - 1) && prim(i + 1))
            cout << i << ' ';
   }

}

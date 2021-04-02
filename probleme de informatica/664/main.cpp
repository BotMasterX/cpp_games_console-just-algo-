#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int numar = 1;
   int distanta = n - 1;
   int numere = 1;
   while(numar <= n - 1)
   {
       for (int i = 1;i <= distanta; ++i)
        cout << ' ';
       for (int i = 1; i <= numere; ++i)
        cout << numar;
       for (int i = 1;i <= distanta; ++i)
        cout << ' ';
        cout << '\n';
        distanta--;
        numar++;
        numere = numere + 2;
   }

   while(numar >= 1)
   {
       for (int i = 1;i <= distanta; ++i)
        cout << ' ';
       for (int i = 1; i <= numere; ++i)
        cout << numar;
       for (int i = 1;i <= distanta; ++i)
        cout << ' ';
        cout << '\n';
        distanta++;
        numar--;
        numere = numere - 2;
   }

}

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.in");

int main()
{
   int numere[100000];
   int n;
   fin >> n;
   int lung = 0;
   int lung_maxx = -1;
   int cifra = -1;
   int cifra_maxx = -1;
   for (int i = 1; i <= n; ++i)
        fin >> numere[i];
   for (int i = n; i >= 1; --i)
   {
       do
       {
           if(numere[i] % 10 == cifra)
           {
               lung++;
               if(lung > lung_maxx)
               {
                   lung_maxx = lung;
                   cifra_maxx = cifra;
               }
           }
           else
           {
               lung = 1;
               cifra = numere[i] % 10;
           }

       }while(numere[i] > 0);
   }
   while(lung_maxx--)
    cout << cifra_maxx;


}

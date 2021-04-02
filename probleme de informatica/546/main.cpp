#include <iostream>
using namespace std;

int main()
{
   int valoare = -1;
   while(valoare != 0)
   {
       cin >> valoare;
       if(valoare != 0)
       {
           int numar = valoare;
           int par_nr = 0;
           int impar_nr = 0;
           int putere_para = 1;
           int putere_impara = 1;
           while(numar)
           {
               int cifra = numar % 10;
               if(cifra % 2 == 0)
               {
                   par_nr = par_nr + putere_para * cifra;
                   putere_para = putere_para * 10;
               }
               else
               {
                   impar_nr = impar_nr + putere_impara * cifra;
                   putere_impara = putere_impara * 10;
               }
               numar = numar / 10;
           }
           cout << max(par_nr,impar_nr) << ' ';
       }
   }
}

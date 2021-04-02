#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int maxx_cif = -1;
   int m = n;
   while(m)
   {
       if(m % 10 > maxx_cif)
        maxx_cif = m % 10;
       m = m / 10;
   }
   int count = 0;
   while(n)
   {
       if(n % 10 == maxx_cif)
        count++;
       n = n / 10;
   }
   cout << maxx_cif << ' ' << count;
}

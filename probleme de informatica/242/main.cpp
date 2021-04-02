#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int m = n;
   int putere = 1;
   while(m)
   {
       putere = putere * 10;
       m = m / 10;
   }
   putere = putere / 10;
   n = n % putere / 10;
   cout << n;
}

#include <iostream>
using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;
   for (int i = a; i <= b; ++i)
   {
       int valoare = i;
       int x = valoare;
       int rasturnat = 0;
       while(x)
       {
           rasturnat = rasturnat * 10 + x % 10;
           x = x / 10;
       }
       if(rasturnat == valoare)
       {
           cout << i;
           break;
       }
   }
}

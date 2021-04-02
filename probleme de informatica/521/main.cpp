#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
   int curent, precedent, count = 0;
   fin >> precedent;
   count = 1;
   while(fin >> curent)
   {
       if(curent == precedent)
        count++;
       else
       {
           cout << precedent << ' ' << count << ' ';
           count = 1;
       }
       precedent = curent;
   }
   cout << precedent << ' ' << count << ' ';
}

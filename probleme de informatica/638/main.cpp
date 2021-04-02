#include <iostream>
using namespace std;

int main()
{
  int z,l,a;
  cin >> z >> l >> a;
  if(z > 1)
   z--;
  else
  {
      l--;
      if(l == 0)
      {
          l = 12;
          z = 31;
          a--;
      }
      else if(l == 1 || l == 3 || l == 5 || l == 7 || l == 8 || l == 10)
      {
          z = 31;
      }
      else if(l == 4 || l == 6 || l == 9 || l == 11)
      {
          z = 30;
      }
      else if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
      {
          z = 29;
      }
  }
  cout << z << ' ' << l << ' ' << a;

}

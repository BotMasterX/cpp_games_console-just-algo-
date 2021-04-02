#include <iostream>
using namespace std;

int main()
{
  int x,y,z,s = 0;
  cin >> x >> y >> z;
  s = x + y + z;
  while(x + y != z)
  {
      x = y;
      y = z;
      cin >> z;
      s = s + z;
  }
  cout << s;
}

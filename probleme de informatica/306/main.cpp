#include <iostream>
using namespace std;

int nr_div(int n)
{
    if(n == 1)
        return 1;
    int nr = 2;
    for (int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            nr++;
            if(i * i < n)
                nr++;
        }
    }
    return nr;
}

int main()
{
  int k,n;
  cin >> k >> n;
  int maxx = 0;
  for (int i = 1; i <= n; ++i)
  {
    int valoare;
    cin >> valoare;
    if(maxx < valoare && nr_div(valoare) == k)
    {
        maxx = valoare;
    }
  }
  cout << maxx;
}

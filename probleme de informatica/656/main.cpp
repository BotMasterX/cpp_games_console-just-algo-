#include <iostream>
using namespace std;

int main()
{
    int a[1001];
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int pornire_sfarsit = n;
    if(n % 2 == 0)
        pornire_sfarsit--;
    for (int i = 2; i <= n; i+=2)
        cout << a[i] << ' ';
    cout << '\n';
    for (int i = pornire_sfarsit; i >=1; i-=2)
        cout << a[i] << ' ';
}

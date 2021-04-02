#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[5001],b[5001],n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= m; ++i)
        cin >> b[i];
    int i = 1,j = 1;
    int elemente = 0;
    while(i <= n && j <= m)
    {
        if(a[i] != b[j])
            i++;
        else
        {
            i++;
            j++;
            elemente++;
        }
    }
    if(elemente == m)
        cout << "da";
    else
        cout << "nu";
}

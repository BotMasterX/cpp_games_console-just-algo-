#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1;
    for (int i = 1; i <= n; ++i)
    {
        int indice = start;
        for (int j = 1; j <= n; ++j)
        {
            cout << indice << ' ';
            indice++;
        }
        cout << '\n';
        start++;
    }
}

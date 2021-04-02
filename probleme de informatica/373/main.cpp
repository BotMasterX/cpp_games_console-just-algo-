#include <iostream>
using namespace std;

int main()
{
    int element = 1;
    int n;
    cin >> n;
    while(element <= n)
    {
        int aparitii = 1;
        for (int i = 1; i <= element; ++i)
        {
            for (int j = 1; j <= aparitii; ++j)
            {
                cout << element << ' ';
            }
            aparitii++;
            cout << '\n';
        }
        element++;
    }
}

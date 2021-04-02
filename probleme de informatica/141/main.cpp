#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int element = 1;
    while(element <= n)
    {
        for (int i = 1; i <= element; ++i)
            cout << '*';
        cout << '\n';
        element++;
    }
}

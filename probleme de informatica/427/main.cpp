#include <iostream>
using namespace std;

int main()
{
    int n;
    int numere[100];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> numere[i];
    int max_x = 0;
    int max_y = 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if(numere[i] < numere[j])
            {
                if(numere[i] * max_y > numere[j] * max_x)
                {
                    max_x = numere[i];
                    max_y = numere[j];
                }
            }
    cout << max_x << "/" << max_y;

}

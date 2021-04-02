#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int element = 1;
    while(element <= n){
        for (int i = 1; i <= element; ++i)
        {
            for (int j = 1; j <= element; ++j)
                cout << element << ' ';
            cout << '\n';
        }
        element++;
    }

}

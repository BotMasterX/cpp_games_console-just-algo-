#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1000; i <= 9999; ++i)
    {
        if(i % 10 == i / 1000 % 10 && i / 10 % 10 == i /100 % 10 && i % n == 0)
            cout << i << ' ';
    }
}

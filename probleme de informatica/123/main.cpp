#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cifra = n % 10;
    int count = 0;
    while(n)
    {
        if(n % 10 == cifra)
            count++;
        n = n / 10;
    }
    cout << count;
}

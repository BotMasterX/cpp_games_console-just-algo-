#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numar = n;
    int oglindit = 0;
    while(n)
    {
        oglindit = oglindit * 10 + n % 10;
        n = n / 10;
    }
    if(oglindit == numar)
        cout << "este";
    else
        cout << "nu este";

}

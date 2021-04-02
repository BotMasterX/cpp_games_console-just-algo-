#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int i = 0;
    while(i * i * i < n)
        i++;
    if(i * i * i == n)
        cout << "DA";
    else
        cout << "NU";
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(float(pow(n,1/3.0)) == floor(float(pow(n,1/3.0))))
        cout << "DA";
    else
        cout << "NU";
}

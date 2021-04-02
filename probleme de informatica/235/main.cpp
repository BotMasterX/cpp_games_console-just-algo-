#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double sp = (double(a) + double(b) + double(c))/double(2.0);
    cout << double(sqrt(double(sp) * (double(sp) - double(a)) * (double(sp) - double(b)) * (double(sp) - double(c))));
}

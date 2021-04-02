#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int delta = -b + 4 * a * c;
    if(delta < 0)
        cout << "nu este in real";
    else if(delta == 0)
        cout << (-b)/(2*a);
    else
        cout << (-b + sqrt(double(delta)))/(2*a);
}

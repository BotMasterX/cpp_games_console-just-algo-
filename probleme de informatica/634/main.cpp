#include <iostream>
using namespace std;

int main()
{
    int h,m,x;
    cin >> h >> m >> x;
    int intregi = x/60;
    int rest = x % 60;

    intregi = intregi % 24;
    h = h - intregi;
    int rest_final;
    if(rest > m){
        rest_final = 60 - (rest - m);
        h--;
    }
    else
        rest_final = m - rest;
    int rezultat = h;
    if(h < 0)
    {
        rezultat = 24 + h;
    }
    cout << rezultat << ' ' << rest_final;


}

#include <iostream>
using namespace std;

int main()
{
    int grad1,minut1,grad2,minut2,secunda = 0;
    cin >> grad1 >> minut1;
    cin >> grad2 >> minut2;
    int grade_finale = (grad1 + grad2)/2;
    int suma_minute = minut1 + minut2;
    double medie_minute = double (suma_minute)/2.0;
    if(medie_minute != suma_minute / 2)
        secunda = 30;
    if(suma_minute/2 > 60)
    {
        grade_finale++;
        suma_minute = suma_minute - 60;
    }

    cout << grade_finale << " " << suma_minute/2 << " " << secunda;

}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    int frecv[1000] = {0};
    for (int i = 1; i <= n; ++i)
        cin >> a[i],frecv[a[i]] = 1;
    bool gasit1 = false;
    bool gasit2 = false;
    int primu,al_doilea;
    for (int i = 999; i >= 100 && (!gasit1 || !gasit2); i--)
    {

        if(frecv[i] == 0 && !gasit1 && !gasit2)
        {
            al_doilea = i;
            gasit2 = true;
        }
        else if(frecv[i] == 0 && !gasit1 && gasit2)
        {
            primu = i;
            gasit1 = true;
        }
    }
    if(gasit1 && gasit2)
        cout << primu << ' ' << al_doilea;
    else
        cout << "NU EXISTA";


}

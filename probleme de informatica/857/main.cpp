#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int frecventa[102];
    for(int i = 0; i <= 100; ++i)
        frecventa[i] = 0;

    int x;
    while(fin >> x){
        frecventa[x] = 1;
    }
    int inceput,sfarsit;
    bool gasit = false;
    for (int i = 0; i <= 100; ++i)
    {
        inceput = i;
        if(frecventa[i] == 0)
        {
            sfarsit = i;
            while(frecventa[sfarsit] == 0 && sfarsit <= 100)
                sfarsit++;
            if(sfarsit != inceput + 1 && sfarsit != 101)
            {
                gasit = true;
                cout << inceput - 1<< ' ' << sfarsit << '\n';
            }
            i = sfarsit;
        }
    }
    if(!gasit)
        cout << "nu exista";
}

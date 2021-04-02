#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
        int patrat = i * i;
        int cub = i * i * i;
        int count1 = 0, count2 = 0;
        while(patrat)
        {
            if(patrat % 10 % 2 == 0)
                count1++;
            patrat = patrat / 2;
        }
        while(cub)
        {
            if(cub % 10 % 2 == 0)
                count2++;
            cub = cub / 2;
        }
        if(count1 == count2)
            cout << i << ' ';
    }
}

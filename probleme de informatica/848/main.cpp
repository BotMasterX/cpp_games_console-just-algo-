#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("bac.txt");

int main()
{
    int s1,s2;
    cin >> s1 >> s2;
    int s1_start,s1_final,s2_start,s2_final;
    if(s1 <= 9)
    {
        s1_start = 1;
        s1_final = s1;
    }
    else
    {
        s1_start = s1 - 9;
        s1_final = 9;
    }

    if(s2 <= 9)
    {
        s2_start = 0;
        s2_final = s2;
    }
    else
    {
        s2_start = s2 - 9;
        s2_final = 9;
    }

    for (int i = s1_start; i <= s1_final; ++i)
        for (int j = 0; j <= 9; ++j)
            for (int k = s2_start; k <= s2_final; ++k)
                fout << i << s1-i << j << k << s2-k << '\n';

}

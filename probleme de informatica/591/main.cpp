#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("munte.txt");

int main()
{
    for (int i = 1; i <= 5; ++i)
        for (int j = i + 1; j <= 6; ++j)
            for (int k = j + 1; k <= 7; ++k)
                for (int h = k + 1; h <= 8; ++h)
                    for (int z =  h + 1; z <= 9; ++z)
                        fout << i << j << k << h << z << h << k << j << i << '\n';
}

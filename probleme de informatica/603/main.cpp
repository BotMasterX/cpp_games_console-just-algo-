#include <fstream>
using namespace std;
ifstream fin("secvk.in");
ofstream fout("secvk.out");

int main()
{
    int n,k,a[100001],s,smax=0,dr;
    fin>>n>>k;
    for(int i=1;i<=n;i++) fin>>a[i];
    s=0;
    for(int i=1;i<=k;i++) s=s+a[i];
    smax=s;dr=k;
    for(int i=k+1;i<=n;i++)
        {
            s=s+a[i]-a[i-k];
            if(s>smax)
            {
                smax=s;
                dr=i;
            }
        }
    for(int i=dr-k+1;i<=dr;i++) fout<<a[i]<<" ";
    fin.close();
    fout.close();
    return 0;
}

//Varianta O(n*n)

#include <fstream>
using namespace std;
ifstream fin("secvk.in");
ofstream fout("secvk.out");

int main()
{
    int n,k,a[100001],s,smax=0,dr;
    fin>>n>>k;
    for(int i=1;i<=n;i++) fin>>a[i];

    for(int i=1;i<=n-k+1;i++)
    {
        s=0;
        for(int j=i;j<i+k;j++) s=s+a[j];
        if(s>smax)
        {
            smax=s;
            dr=i+k-1;
        }
    }
    for(int i=dr-k+1;i<=dr;i++) fout<<a[i]<<" ";
    fin.close();
    fout.close();
    return 0;
}

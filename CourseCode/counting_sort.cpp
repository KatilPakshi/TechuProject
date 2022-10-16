#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[101],X,n;
int maxi;

  
int main()
{
    f>>n;
    for (int i = 1; i <= n; i++)
    {
        f>>X;
        ++A[X];

        maxi = max (maxi,X);
    }
    
    for (int i = 1; i <= maxi; i++)
    {
        if(A[i]>0)
        {
            for(int j=1; j<=A[i];j++){
                cout<<i<<" ";
            }
        }

    }
        
    return 0;
}
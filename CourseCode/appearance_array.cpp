#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[100];

int main()
{
    int n;
    f>>n;
    
    for(int i = 1; i <=n;i++){
        int x;
        f>>x;
        ++A[x];
    }
    
    if(A[4]>0) g<<"YES, it appears!!";
        else g<<"Not"<<endl;
   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n,q,k,A[1000],Left,Right,mid;

int BinarySearch(int X){

    int Left=0,Right=n-1,mid;

    while(Left <= Right){
        mid = (Left + Right)/2;

        if (X==A[mid]) return mid;
        else if (X<A[mid]) Right = mid-1;
                        else Left = mid+1;
    }
    return -1;
}

int main()
{
    cin>>n>>q;
    
    for (int i = 0; i<n; i++){
        cin>>A[i];
    }

    for (int j = 0; j<q; j++){
        
        cin>>k;
        cout<<BinarySearch(k)<<endl;
    }


    return 0;
}
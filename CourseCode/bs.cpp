#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[1000],numEle;

int BinarySearch(int X){

    int Left=1,Right=numEle,mid;

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
    f>>numEle;

    for(int i=0;i<numEle;++i){
        f>>A[i];
    }

    cout<<BinarySearch(19);

    return 0;
}
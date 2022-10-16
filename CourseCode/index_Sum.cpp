/*
"Given an array A of N elements and a number P. Print "YES" if you 
can find three indices i,j,k (i<j<k) so that A[i]+A[j]+A[k]=P, else 
print "NO" "

Restrictions:
1 <= T <= 15
3 <= N <= 1000
1<=A[i]<=10^9,1<=i<=N
1<=P<=3*10^9
time = 0.1sec

*/ 

#include<bits/stdc++.h>
using namespace std;

ifstream f("inputf.in");
int Ok,T,n;
long long P,A[1005];

int BinarySearch(int Left,int Right,long long X)
{
	int mid;

	while(Left<=Right)
	{
       mid = (Left+Right)/2;
       if(A[mid]==X) return 1;
       else if (A[mid] > X) Right=mid-1;
       else Left = mid+1;
	}
	return -1;
}

int main(void)
{
  cin>>T;
  for(int t=1;t<=T;++t)
  {
  	cin>>n;

  	for (int i=1; i <=n; ++i)
  	{
  		cin>>A[i];
  	}

  	cin>>P;
  	sort(A+1,A+n+1);

  	Ok=0;
  	for (int i=1; i < n; ++i)
  	{
  		for (int j = 1; j<=n; ++j)
  		{
  			long long auxSum = P - A[i]-A[j];

  			if(BinarySearch(j+1,n,auxSum)==1) Ok=1;

  		}
  	}

  	if(Ok==1) cout<<"YES"<<endl;
  		  else cout<<"NO"<<endl;
  }

}
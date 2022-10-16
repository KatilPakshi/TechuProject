#include<bits/stdc++.h>
using namespace std;

int main()
{
   
   int a=9, b=4 , maximum;

   maximum = max(a,b);
   swap(a,b);

   int num = 2;
   double cubicroot;

   cubicroot = pow((double)(num),1.0/3);

   cout<<cubicroot<<"\n";
   cout<<fixed<<setprecision(10)<<cubicroot<<"\n";

    return 0;
}
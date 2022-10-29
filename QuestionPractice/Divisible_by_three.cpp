#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<deque>
using namespace std;

int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
         int a,b,count=1;
         cin>>a>>b;

         if(a%3==0 || b%3==0)
         {
             cout<<0<<endl;
             continue;
         }

         if(a==b)
         {
             cout<<1<<endl;
             continue;
         }

        if(a>b)
        {
            int temp = a-b;
            while(temp%3!=0)
            {
                count++;
                temp -=b;
            }
        }
        if(b>a)
        {
            int temp = b-a;
            while(temp%3!=0)
            {
                count++;
                temp -=a;
            }
        }

         cout<<count<<endl;
    }
    return 0;
}
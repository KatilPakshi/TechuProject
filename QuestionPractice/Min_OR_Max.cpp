#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, mini = 1, maxi = 0;
        cin >> n;

        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        int a;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(i==0)
            {
                maxi=a;
                mini=a;
            }
            else
            {
                if(a<=mini)
                {
                    mini=a;
                }
                else if (a>=maxi)
                {
                    maxi=a;
                }
                else
                {
                    flag=1;
                }
            }
        }

        if(flag ==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
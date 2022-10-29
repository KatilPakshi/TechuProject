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
        int n, k;
        cin >> n >> k;
        long long int ans = 0;
        for (int i = 0; i < 30; i++)
        {
            if (n % 2 == k % 2)
            {
                ans += min(n, k);
                k -= min(n, k);
            }
            else
            {
                ans += min((n - 1), k);
                k -= min(n - 1, k);
            }
            k /= 2;
        }
        cout << ans << '\n';
     
    }
    return 0;
}
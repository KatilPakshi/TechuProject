/*Problem Link- https://practice.geeksforgeeks.org/problems/print-leaf-nodes-from-preorder-traversal-of-bst2657/1

Problem Statement-
Given a preorder traversal of a BST, find the leaf nodes of the tree without building the tree.


Example 1:

Input:
N = 2
arr = {2,1}
Output: {1}
Explaination: 1 is the only leaf node.

Example 2:

Input:
N = 3
Arr = {3, 2, 4}
Output: {2, 4}
Explaination: 2, 4 are the leaf nodes.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void helper(int arr[],int st,int end,vector<int> &ans){
        if(st>end){return;}
        if(st==end){ans.push_back(arr[st]); return;}
        int ind=st+1;
        while(ind<=end && arr[ind]<arr[st]){ind++;}
        helper(arr,st+1,ind-1,ans);
        helper(arr,ind,end,ans);
    }
    vector<int> leafNodes(int arr[],int N) {
        vector<int> ans;
        helper(arr,0,N-1,ans);
        return ans;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> res;
    if (!root)
        return res;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        vector<int> level;
        for (int i = 0; i < n; i++)
        {
            TreeNode *currNode = q.front();
            q.pop();
            level.push_back(currNode->val);
            if (currNode->left != NULL)
                q.push(currNode->left);
            if (currNode->right != NULL)
                q.push(currNode->right);
        }
        res.push_back(level);
    }
    return res;
}

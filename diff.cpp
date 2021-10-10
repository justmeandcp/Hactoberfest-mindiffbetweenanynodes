class Solution {
public:
    void inorder(TreeNode* root,vector<int> &v)
    {
        if(root==NULL)
        return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        int mini=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            mini=min(mini,v[i]-v[i-1]);
        }
        return mini;        
    }
};

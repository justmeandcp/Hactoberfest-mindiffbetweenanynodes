class Solution {
public:
    int prev=-1,mini=INT_MAX;
    int minDiffInBST(TreeNode* root) {
    int left=0,right=0;
    if(root->left)
    minDiffInBST(root->left);
    if(prev>=0)
    mini=min(mini,root->val-prev);
    prev=root->val;
    if(root->right)
    minDiffInBST(root->right);
    return mini;
    }
};

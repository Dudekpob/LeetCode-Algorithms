/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>z;
    bool isUnivalTree(TreeNode* root) 
    {
         search(root);
        sort(z.begin(),z.end());
        for(int i = 0; i<z.size(); i++)
        {
            if(i+1 < z.size())
            {
                 if(z[i] != z[i+1])
                 {
                     return false;
                 }
            }
        }
        return true;
    }
    void search(TreeNode* root)
    {
        if(root == NULL)
            return;
        
         z.push_back(root->val);
         search(root->left);
         search(root->right);
        
    }
};

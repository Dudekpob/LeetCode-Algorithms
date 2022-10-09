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
    vector<int>kk;
    bool findTarget(TreeNode* root, int k) {
            search(root);
        for(int i = 0; i<kk.size();i++)
        {
            for(int j = 0; j<kk.size(); j++)
            {
                if(i!=j && (kk[i] + kk[j]) == k)
                {
                    return true;
                }
            }
        }
        return false;
    }
    void search(TreeNode* root)
    {
         if(root == nullptr)
             return;
        
        kk.push_back(root->val);
        search(root->left);
        search(root->right);
    }
};

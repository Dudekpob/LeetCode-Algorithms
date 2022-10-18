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
    vector<vector<int>> level;
    vector<int>k;
    vector<vector<int>> levelOrder(TreeNode* root) {
            search(root);
        for(int i = 0; i<k.size(); i++)
        {
            level[i].push_back(k);
        }
        
    }
    void search(TreeNode* root)
    {
        if(root == NULL)
            return;
        
       k.push_back(root->val);
        search(root->left);
        search(root->right);
        
        
    }
};

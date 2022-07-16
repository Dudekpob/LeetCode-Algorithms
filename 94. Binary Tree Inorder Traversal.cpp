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
        vector<int> inorder_T;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        
    if (root == NULL)
        return inorder_T;
  
    inorderTraversal(root->left);
  
    inorder_T.push_back(root->val);

    inorderTraversal(root->right);
        
        return inorder_T;
  
    }
};

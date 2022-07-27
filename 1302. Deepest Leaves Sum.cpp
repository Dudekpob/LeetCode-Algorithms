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
    int max_left = 0;
    int max_right = 0;
    int max;
    int deepestLeavesSum(TreeNode* root) 
    {
            if(root == NULL)
                return root->val;
        
            max_left+=root->val;
            deepestLeavesSum(root->left);
            
            max_right+=root->val;
            deepestLeavesSum(root->right);
        return  max_left > max_right ? max_left : max_right;
        
        
    }
};

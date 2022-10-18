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
    bool flag = 0;
    bool isValidBST(TreeNode* root) {
        root2 = root;
        search(root, root2);
    }
    void search(TreeNode* root, TreeNode* root2)
    {
        if(root == NULL)
            return;
        
        if(root->left->val == root2->right->val)
        search(root->left);
        search(root->right);
        
    }
};

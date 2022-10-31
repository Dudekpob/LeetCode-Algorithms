
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
    int min_ =INT_MIN;
    int diameterOfBinaryTree(TreeNode* root) 
    {   
       if (root == NULL)
        return 0;
        search(root);
        return min_;
    }
    int search(TreeNode* root)
    {
            if(root==NULL)return 0;
    int left=search(root->left);
    int right=search(root->right);
    min_=max(min_,left+right);
    return max(left,right)+1;
    }
    
    


};

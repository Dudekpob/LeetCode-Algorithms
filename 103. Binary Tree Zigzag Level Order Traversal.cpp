
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
   vector<int> k;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        trees(root);
        for(int i = 0; i<k.size(); i++)
        {
            std::cout<<k[i]<<endl;
        }
    }
    
    void tree(TreeNode *root)
        {
                if(root == null)
                    return;
        
                k.push_back(root->val);
        
                 tree(root->left);
        
                 tree(root->right);
                    
                                 
        }
};

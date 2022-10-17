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
    vector<int> s;
    bool isSymmetric(TreeNode* root) {
        search(root);
        int pivot = s.size()/2;
        for(int i = 1; i<s.size()/2; i++)
        {
            if(s[i] !=s[pivot])
            {
                return false;
            }
            pivot++;
        }
        return true;
    }
    void search(TreeNode* root)
    {
        if(root == NULL)
            return;
        s.push_back(root->val);
        root->left;
        root->right;
        
    }
};

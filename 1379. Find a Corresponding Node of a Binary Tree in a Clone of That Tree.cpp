
class Solution {
public:
    TreeNode*res = NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            ans(original,cloned,target);
        return res;
 
    }
    
    void ans(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
            if(original==NULL) return;
        if(original==target){
            res=cloned;
        }
        ans(original->left,cloned->left,target);
        ans(original->right,cloned->right,target);
    }
};

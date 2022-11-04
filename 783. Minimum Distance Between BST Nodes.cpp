
class Solution {
public:
    vector<int>difference;
    int minDiffInBST(TreeNode* root) 
    {
            search(root);      
            sort(difference.begin(), difference.end());
            int min = INT_MAX;
            for(int i = 0; i<difference.size(); i++)
            { 
                  for(int j = 0; j<difference.size(); j++)
                  { 
                        if(i!=j and abs(difference[i]-difference[j]) < min)
                         min = abs(difference[i]-difference[j]); 
                  }
            }
        return min;
    }
    void search(TreeNode* root)
    {
              if(root == NULL)
                  return;
            difference.push_back(root->val);
            search(root->left);
            search(root->right);
    }
    
};

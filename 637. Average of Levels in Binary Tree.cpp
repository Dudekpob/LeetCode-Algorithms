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
    vector<pair<int,int>> k;
    int cnt = 0;
    vector<int> z;
    vector<double> sumtotal;
    vector<double> averageOfLevels(TreeNode* root)
    {
        
                 search(root);
        int c = 0;
        int sum = 0;
        int ccnt = 0;
        sumtotal.push_back(root->val);
        for(int i = 1; i<k.size(); i++)
        { 
          cout<<z[i]<<endl;
          cout<<k[i].first<<" "<<k[i].second<<endl;
            ccnt++;
          sum+=z[i];
             if(c < k[i].first)
             {
                 sumtotal.push_back(sum/ccnt);
                 c = k[i].first;
                 sum = 0;
                 ccnt = 0;
             }
        }
        return sumtotal;
    }
    void search(TreeNode* root)
    {
          if(root == NULL)
          { 
              cnt++;
              return;
          }
        
         z.push_back(root->val);
         pair<int,int> kk;
         kk.first = cnt;
         kk.second = root->val;
         k.push_back(kk);
         search(root->left);
         search(root->right);
    }
    
};

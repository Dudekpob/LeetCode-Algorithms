class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>z;
        for(int i = 0; i<matrix.size(); i++)
        {
             z = matrix[i];
               if(find(z.begin(), z.end(), target) != z.end())
               {
                   return true;
               }
        }

        return false;
    }
};

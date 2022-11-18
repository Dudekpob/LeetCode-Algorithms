/*
 * @lc app=leetcode id=2319 lang=cpp
 *
 * [2319] Check if Matrix Is X-Matrix
 */

// @lc code=start
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {

            bool res = false;

                if(grid[0][0] > 0 && grid[0][grid.size()-1] > 0)
                {
                    
                }
                if(grid[grid.size()-1][0] > 0 && grid[grid.size()-1][grid.size()-1] > 0)
                {
                    
                }
                if (!res)
                {
                    return false;
                }
                
            for (int i = 0; i < grid.size(); i++)
            {
               
                
                for (int j = 0; j < grid[i].size(); j++)
                {
                    if(i != 0 )
                    if (j > 0)
                    {
                        
                    }
                    
                    if (j == 0 && grid[i][j] = 0 &&  )
                    {
                        continue;
                    }
                    
                }
                
            }
                   return true;      
    }
};
// @lc code=end


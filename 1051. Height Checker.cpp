class Solution {
public:
    int heightChecker(vector<int>& heights) {
              
                    vector<int> z;
                    
                    for(int i = 0; i<heights.size(); i++)
                    {
                        z.push_back(heights[i]);
                    }
        
                    sort(z.begin(), z.end());
                    int cnt = 0;
                    for(int i = 0; i<heights.size(); i++)
                    {
                         if(heights[i] != z[i])
                         {
                             cnt++;
                         }
                    }
        return cnt;
    }
};

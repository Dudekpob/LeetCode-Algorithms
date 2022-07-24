class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        vector<int> z;
          for(int i = 0; i < nums.size(); i++)
          {
              z.push_back(nums[nums[i]]);
          }
        return z;
    }
};

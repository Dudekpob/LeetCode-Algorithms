class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        int average = 0;
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++)
        {
              if(nums[i] % 3 == 0 && nums[i] % 2 == 0)
              {
                  average+=nums[i];
                  cnt++;
              }
        }
        
        return cnt > 0 ?  average/cnt : 0 ;
    }
};

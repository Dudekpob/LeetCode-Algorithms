class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int cnt = 0; 
        int max = 0;
        int max_cnt = 0;
        int index = 0;
        sort(nums.begin(), nums.end());
        max = nums[0];
        for(int i = 0; i<nums.size(); i++)
        {
            if( i+1 < nums.size())
            {
            if(nums[i] == nums[i+1])
            {
                cnt++;
            }                
            }
            if(cnt == n/2)
            {
                return nums[i];
            }
        }
        return nums[index];
    }
};

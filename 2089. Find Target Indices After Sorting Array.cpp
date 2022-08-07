class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
            sort(nums.begin(), nums.end());
            vector<int> k;
       for(int j = 0; j<nums.size(); j++)
       {
           if(nums[j] == target)
                 k.push_back(j);
       }
        return k;
    }
};

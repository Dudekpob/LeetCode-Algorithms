class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
   unordered_map<int,int> counter;

        for(int i=0; i<nums.size(); i++)
        {
            if(counter.count(nums[i]))
            {
                if(abs(i-counter[nums[i]])<=k)
                    return true;
            }
         counter[nums[i]] = i;
        }
        return false;
    }
};

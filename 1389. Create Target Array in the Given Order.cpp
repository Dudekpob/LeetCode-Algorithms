
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
                vector<int> poldon;
                for(int i = 0; i<nums.size(); i++)
                {
                    poldon.emplace(poldon.begin()+index[i],nums[i]);
                }
            return poldon;
    }
};

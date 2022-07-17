class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
           vector<vector<int>>per;
         vector<int>mute;
       sort(nums.begin(), nums.end());      
        do{
             mute = nums;
              per.push_back(mute);
        }
        while(std::next_permutation(nums.begin(),nums.end()));
        return per;
    }
};

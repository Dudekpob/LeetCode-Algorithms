class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
         vector<vector<int>>per;
         vector<int>mute;
        sort(nums.begin(), nums.end());
        int i = 0;
        do{
             mute = nums;
              per.push_back(mute);
        }
        while(std::next_permutation(nums.begin(),nums.end()));
        return per;
    }
};

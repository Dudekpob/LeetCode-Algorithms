class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {     
         vector<pair<int,int>>k; //first -1; second plus
            for(int i = 0; i<nums.size(); i++)
            {
                 for(int j = 0; j<nums.size(); j++)
                 {
                     if(nums[i] == nums[j]*-1)
                     {
                         k.push_back(make_pair(nums[i],nums[j]));
                     }
                 }
            }
        
        if(k.size()>=1)
        {
   const auto p  =   *max_element(k.begin(), 
            k.end(), 
            [](const auto& lhs, const auto& rhs) { return lhs.second < rhs.second; });
                return p.second;
            }
        
      return -1;
    }
};

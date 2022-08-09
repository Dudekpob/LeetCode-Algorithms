class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
                vector<int> z;
                sort(nums.begin(), nums.end());
                vector<int>even;
                vector<int>odd;
                vector<int>ret;
                for(int i = 0; i<nums.size(); i++)
                {
                    if(nums[i] % 2 == 0)
                    {
                        even.push_back(nums[i]);
                    }
                    else
                        odd.push_back(nums[i]);
                }
        
                for(int i = 0; i<even.size(); i++)
                    ret.push_back(even[i]);
        
                for(int i = 0; i<odd.size(); i++)
                    ret.push_back(odd[i]);
           
                return ret;    
    }
};

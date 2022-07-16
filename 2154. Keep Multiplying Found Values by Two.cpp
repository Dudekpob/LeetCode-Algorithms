class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
                    int cnt = 0;
                    int multi = original ;
                    int max = 0;
                    
            for(int i = 0; i<nums.size(); i++)
            {
                
                  for(int j = 0; j<nums.size(); j++)
                  {
                        if(nums[j] == multi)            
                        {
                            multi = multi *2;
                        }
                  }
            }
        return multi;
    }
};

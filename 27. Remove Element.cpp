class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {           
                //int k = 0;
        //sort(nums.begin(),nums.end());
                for(int i = 0; i<nums.size(); i++)
                    {
                    cout<<nums[i];
                                  if(nums[i] == val)
                                  {
                                           nums.erase(nums.begin()+i); 
                                  }
                    }
        return nums.size();
    }
};

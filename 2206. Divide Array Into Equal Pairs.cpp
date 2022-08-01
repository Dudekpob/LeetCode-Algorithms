class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int pair = 0;
        int sizee = nums.size()/2;
        for(int i = 0; i<nums.size(); i++)
        {
               if(i+1<nums.size() && nums[i] == nums[i+1]) 
               {
                   nums.erase(nums.begin()+i);
                   pair++;
               }
        }
        cout<<pair<<endl;
        return sizee == pair ? true : false; 
    }
};

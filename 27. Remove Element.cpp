class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {           
        	int k = nums.size(), i = 0;
		for ( ;i < k;)
		{
			 if ( nums[i] == val )
			 {
				 nums[i] = nums[k - 1];
				 -- k;
			 }
				
			else ++i;
		}
		 return k;  
	
    }
};

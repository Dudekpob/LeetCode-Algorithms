class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
          vector<int> z;
                for(int i = 0; i<nums.size(); i++)
                {
                    z.push_back(nums[i]*nums[i]);
                    
                }
                sort(z.begin(), z.end());
                vector<int> x;
                for(int i = 0; i<z.size(); i++)
                {
                      cout<<" "<<z[i]<<"\n";
                }
                return z;
    }
};

class Solution {
public:
    int countElements(vector<int>& nums) {
            int cnt_low = 0;
            int cnt_high = 0;
            int found = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(i!=j && nums[i] > nums[j])
                {
                     cnt_high++;
                    cout<<cnt_high<<endl;
                }
                if(i!=j && nums[i] < nums[j])
                {
                     cnt_low++;
                    cout<<cnt_low<<endl;
                }
            }
             if(cnt_low > 0  && cnt_high > 0 )
             {
                 found++;
             }
            cnt_low=0;
            cnt_high=0;
        }
            return found;
    }
};

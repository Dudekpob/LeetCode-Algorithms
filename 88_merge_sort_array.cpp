
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         
       vector<int>z;
        for(int i = 0; i < m; i++)
            {
                    z.push_back(nums1[i]);
            }
        
        for(int i = 0; i < n; i++)
            {
                    z.push_back(nums2[i]);
            }
        
        sort(z.begin(), z.end());
        
        for(int i = 0; i<nums1.size(); i++)
        {
            nums1[i] = z[i];
        }
    }
};

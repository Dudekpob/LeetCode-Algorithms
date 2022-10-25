class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<double> sorted;
          for(int i = 0; i<nums1.size(); i++)
          {
              sorted.push_back(nums1[i]);
          }
        
          for(int i = 0; i<nums2.size(); i++)
          {
              sorted.push_back(nums2[i]);
          }
        sort(sorted.begin(), sorted.end());
        
        if(sorted.size() % 2 == 0)
            return ((sorted[sorted.size()/2])+(sorted[(sorted.size()/2)-1]))/2;
        
        return (sorted[(sorted.size()/2)]);
        
        
    }
};
